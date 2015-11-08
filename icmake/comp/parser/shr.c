#include "parser.ih"

SemVal *shr(SemVal *lval, SemVal *rval)
{
    if (test_binop(op_shr, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_shr))       /* test type conflict */
        return(lval);

    if ((lval->type & rval->type & (size_t)~e_typeMask) == e_const)
        lval->evalue >>= rval->evalue;
    else
        defcode(lval, rval, op_shr);

    return (lval);                          /* return new expression */
}