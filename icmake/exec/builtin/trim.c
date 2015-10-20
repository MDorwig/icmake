/*
        Function {\em fun\_trim()} returns its argument with leading and trailing whitespaces removed
    }
*/

#include "builtin.ih"

void fun_trim()
{
		int len = 0 ;
    char *cp = stringStr(top());
    while(isspace(*cp))
      cp++;
    len = strlen(cp);
    while(--len >= 0 && isspace(cp[len]));
    reg = *stringConstructor_cPn(cp,len+1);
}

