/*
\funcref{fun\_atol}{void fun\_atol ()}
    {}
    {}
    {addtolist(), discard(), newvar()}
    {fun\_atoi(), etc.}
    {funatol.c}
    {
        This function converts the last pushed variable, which is assumed to
        hold a string, to a list of one element. The string variable is
        discarded after use. The formed list, containing one element, is copied
        onto the stack to the former position of the string variable.
    }
*/

#include "opcodefun.ih"

#include "../var/var.h"

void o_atol()
{
    Variable tmp = *listcons_charPtr(string_charp(stack_top()));
   virtual_assign(stack_top(), &tmp);
    listDestructor(&tmp);
}
