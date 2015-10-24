#include "icrssdef.h"

int _spawnlp (int mode, const char *prog, const char *av0, ...)
{
    va_list
        marker;
    register char
      *nextarg;
    char
      *buf;
    int
      res ;
    buf = xstrdup(prog);

    va_start (marker, av0);
    nextarg = va_arg (marker, char*);

    while (nextarg)
    {
        buf = xstrcat (buf, " ");
        buf = xstrcat (buf, nextarg);
        nextarg = va_arg (marker, char*);
    }
    res = system (buf);
    free(buf);
    return (res);
}

#ifdef DEBUG
int main ()
{
    _spawnlp (0, "ls", "ls", "*.c", "*.h", NULL);

    return (0);
}
#endif

