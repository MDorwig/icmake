/*
\funcref{fun\_strlen}{void fun\_strlen ()}
    {}
    {}
    {strlen()}
    {}
    {funstrlen.c}
    {
        Function {\em fun\_strlen()} returns the length of a string
    }
*/

#include "builtin.ih"

void b_strLength()
{
    gb_reg = *intcons_int((int)strlen(string_charp(stack_top())));
}