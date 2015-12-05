#include "parser.ih"

size_t p_rmJmpZero(register size_t codelen, unsigned *list, 
                   register size_t listlen)
{
    return
        listlen && (list[listlen - 1] == codelen) ?
            (sizeof(int8_t) + sizeof(int16_t))
        :
            0
    ;
}
