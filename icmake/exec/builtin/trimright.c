/*
        Function {\em fun\_trimright()} returns its argument with tailing whitespaces removed
    }
*/

#include "builtin.ih"

void fun_trimright()
{
    char *cp = xstrdup(stringStr(top()));
    char * end = cp + strlen(cp);
    while(--end >= cp)
    {
      if (!isspace(*end))
      {
        *++end=0;
        break ;
      }
    }
    reg = *stringConstructor_cP(cp);
    free(cp);
}
