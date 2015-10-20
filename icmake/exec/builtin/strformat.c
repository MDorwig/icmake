/*
 * strformat.c
 *
 *  Created on: 20.10.2015
 *      Author: dorwig
 */
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
#include "../string/string.ih"

static void append(STRINGVAR_ * res,const char * s)
{
  STRINGVAR_ tmp ;
  tmp = *stringConstructor_cP(s);
	stringAdd(res,&tmp);
	stringDestructor(&tmp);
}

static void appendn(STRINGVAR_ * res,const char * s,size_t n)
{
  STRINGVAR_ tmp ;
  tmp = *stringConstructor_cPn(s,n);
	stringAdd(res,&tmp);
	stringDestructor(&tmp);
}

static void addarg(STRINGVAR_ * res,size_t i,int * newelement)
{
  char * string = getarg(i,newelement);
  append(res,string);
  if (typeValue(top() - i) & e_list && *string && *newelement == 0)
    append(res," ");
  free(string);
}


void fun_strformat(void)
{
		int newelement;

		size_t nargs = intValue(top());

		char * fmt = getarg(1,&newelement);
		char * last = fmt;
		reg = *constructor(e_str);
		while(*fmt)
		{
			if (*fmt++ == '%')
			{
				if (isdigit(*fmt))
				{
					appendn(&reg,last,fmt-1-last);
					size_t i = strtol(fmt,&last,10) ; // parameter index
					if (i >= 1 && i <= nargs)
					{
						do
						{
							addarg(&reg,i+1,&newelement);
						} while(newelement == 0);
					}
					else
					{
						append(&reg,"(null)");
					}
				}
				else if (*fmt == '%')
				{
					appendn(&reg,last,fmt-last);
					last = ++fmt;
				}
			}
		}
		if (last < fmt)
		{
			appendn(&reg,last,fmt-last);
		}
}




