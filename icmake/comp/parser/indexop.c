#include "parser.ih"

SemVal *indexOp(SemVal *larg, SemVal *rarg)
{
    register int ok;
    ExprType type = f_element;
    SemVal *tmp;


    etoc(larg);                             /* arg to stack */
    etoc(rarg);                             /* arg to stack */

    /* This follows the code of `twoargs.c' to compute a list/string    */
    /* element                                                          */

                                            /* first arg must be int */
    if (!test_type(larg, e_int))            /* first expression is no int */
    {
        tmp = larg;                         /* then swap    */
        larg = rarg;
        rarg = tmp;
    }

    if ( (ok = test_type(larg, e_int)) )    /* right arg must be int    */
    {                               /* second arg == list: ok */
        if (!(ok = test_type(rarg, e_list)))
        {                           /* second arg == string: ok */
            ok = test_type(rarg, e_str);
            type = f_str_el;        /* string element requested */
        }
    }

    if (ok)
    {
        catcode(rarg, larg);                /* make one code vector */
        callrss(rarg, type);
    }
    else
    {
        util_semantic(gp_typeConflict, gp_funstring[type]);
        discard(larg);
    }
    return (rarg);
}