#include "state.ih"

void state_negate(size_t linenr)
{
    State *sp = st_stack + st_size - 1;

    if (sp->elseCount++)
        rss_fatal(filestack_tos()->filename, linenr,
            "multiple #else directives of #if(n)def encountered");

        
    if ((sp - 1)->active)                   /* previous state is active */
        sp->active = !sp->active;           /* then negate */
}
