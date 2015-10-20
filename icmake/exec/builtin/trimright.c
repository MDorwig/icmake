/*
        Function {\em fun\_trimright()} returns its argument with tailing whitespaces removed
    }
*/

#include "builtin.ih"

void fun_trimright()
{
    char *cp = stringStr(top());
    int len = strlen(cp);
    while(--len >= 0 && isspace(cp[len]));
    reg = *stringConstructor_cPn(cp,len+1);
}
