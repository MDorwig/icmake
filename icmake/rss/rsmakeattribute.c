#include "rss.ih"

int rs_makeAttribute(char *fname)            /* make DOS attribs */
{
    register int ret = 0;                    /* returned attribute */
    struct stat statbuf;                     /* stat () buffer */

    if (stat(fname, &statbuf) == -1)           /* if not stat-able .. */
        return 0xdead;                        /* dead flag return */

    if (S_ISDIR(statbuf.st_mode))               /* directory entry */
        ret |= A_SUBDIR;

    if (!(statbuf.st_mode & S_IWUSR))           /* S_IWRITE: not POSIX */
        ret |= A_RDONLY;                        /* non-writable entry */

    if (*fname == '.' &&                        /* .file */
        strcmp(fname, ".") &&
        strcmp(fname, "..")
       )
        ret |= A_HIDDEN;

    return ret;                               /* return attrib */
}
