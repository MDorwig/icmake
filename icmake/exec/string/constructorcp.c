#include "string.ih"

STRINGVAR_ *stringConstructor_cP(char const *str)
{
    static STRINGVAR_ ret = {e_str, {0}};

    ret.vu.i = newstring(xstrdup(str));
    return &ret;
}

STRINGVAR_ *stringConstructor_cPn(const char * str,int n)
{
  static STRINGVAR_ ret = {e_str, {0}};
  char * cp = malloc(n+1);
  strncpy(cp,str,n);
  cp[n]=0;
  ret.vu.i = newstring(cp);
	return &ret;
}
