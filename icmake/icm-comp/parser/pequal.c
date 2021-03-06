/*
                            E Q U A L . C
*/

#include "parser.ih"

SemVal *p_equal(SemVal *lval, SemVal *rval)
{
    p_bool2int(lval);                             /* convert boolean to i */
    p_bool2int(rval);

    if (p_conflict(lval, rval, op_eq))        /* test type p_conflict */
        return lval;

    if ((lval->type & rval->type & (size_t)~e_typeMask) == e_const)
    {
        if (test_type(lval, e_int))
            lval->evalue = (lval->evalue == rval->evalue);
        else
        {
            lval->evalue = !
                      (
                        strcmp
                        (
                            gp_stringTable[lval->evalue].string,
                            gp_stringTable[rval->evalue].string
                        )
                      );
            set_type(lval, e_int | e_const);
        }
    }
    else
        p_binOp(lval, rval, op_eq);

    return lval;                            /* return new expression */
}
