/*
\funcref{fun\_print}{void fun\_print ()}
    {}
    {}
    {print(), xrealloc()}
    {fun\_exec()}
    {funprint.c}
    {

        This function prints the arguments to a {\em printf()} statement,
        pushed onto the stack previously. The number of arguments to printf is
        the last pushed value.

    }

*/

#include "builtin.ih"

static void printarg(FILE * out,size_t i,int * newelement)
{
	int len ;
  char * string = getarg(i,newelement);
  len = strlen(string);
  fwrite(string,1,len,out);
  if ((typeValue(top() - i) & e_list) && string[len-1] != '\n' && *newelement == 0)
  	fputc(' ',out);
  free(string);
}

void fun_printf (void)
{
  fun_ffprintf(stdout,1);
}

void fun_ffprintf (FILE * out,size_t start)
{
    int cprintf = 0;
    size_t i;
    int newelement;

    size_t nargs = intValue(top());
    char * fmt = getarg(start,&newelement);
    char * cp = NULL;
    if (nargs > 1)
    {
    	cp = strchr(fmt,'%');
    	if (cp != NULL)
    	{
    		cprintf = isdigit(cp[1]);
    	}
		}
    if (cprintf)
    {
      char * last = fmt;
      while(*fmt)
      {
        if (*fmt++ == '%')
        {
          if (isdigit(*fmt))
          {
            int l = fmt-1-last;
            fwrite(last,1,l,out);
            size_t i = strtol(fmt,&last,10) ; // parameter index
            if (i >= 1 && start+i <= nargs)
            {
              do
              {
                printarg(out,start+i,&newelement);
              } while(newelement == 0);
            }
            else
            {
              fputs("(null)",out);
            }
          }
          else if (*fmt == '%')
          {
            int l = fmt-last;
            fwrite(last,1,l,out);
            last = ++fmt;
          }
        }
      }
      if (last < fmt)
      {
        fwrite(last,1,fmt-last,out);
      }
    }
    else
    {
    	fputs(fmt,out);
    	start += newelement;
      for (i = start; i <= nargs; i += newelement)
      {
          printarg(out,i,&newelement);
      }
    }
}
