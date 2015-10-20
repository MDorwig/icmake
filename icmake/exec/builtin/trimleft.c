/*
        Function {\em fun\_trimleft()} returns its argument with leading whitespaces removed
    }
*/

#include "builtin.ih"

void fun_trimleft()
{
    char *cp = stringStr(top());
    while(isspace(*cp))
      cp++;
    reg = *stringConstructor_cP(cp);
}
