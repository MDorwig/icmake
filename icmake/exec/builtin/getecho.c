
#include "builtin.ih"

void fun_getecho ()
{
    reg.type = e_int;
    reg.vu.intval = echo;
#ifndef MSDOS
  getpid ();
#else
  _psp;
#endif
}
