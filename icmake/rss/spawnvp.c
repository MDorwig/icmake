#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "icrssdef.h"

int _spawnvp (int mode, const char *prog, const char **av)
{
    char 
      *buf ;
    int
      res;

    buf = xstrdup(prog);
    av++;

    while (*av)
    {
        buf = xstrcat (buf, " ");
        buf = xstrcat (buf, *av);
        av++;
    }
    res = system (buf);
    free(buf);
    return (res);
}

#ifdef DEBUG
int main ()
{
    static char
        *args [] = { "ls", "*.c", "*.h", NULL };

    _spawnvp (0, "ls", (const char **) args);

    return (0);
}
#endif
