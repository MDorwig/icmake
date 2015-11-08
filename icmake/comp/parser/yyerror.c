#include "parser.ih"

static char *err_msg[] =
    {
        "(",                            /* err_openpar_expected, */
        ")",                            /* err_closepar_expected, */
        "{",                            /* err_openbrace_expected, */
        "}",                            /* err_closebrace_expected, */
        ";",                            /* err_semicol_expected, */
        "=",                            /* err_assign_expected, */
        "error in expression",          /* err_in_expression, */
        ",",                            /* err_comma_expected, */
        "statement(s)",                 /* err_statements_expected, */
        "identifier",                   /* err_identifier_expected, */
        "code or vars",                 /* err_code_or_vars_expected, */
        ",' or ')'",                    /* err_comma_or_closepar_expected, */
        "number",                       /* err_number_expected, */
        "older', 'younger' or 'newer'", /* err_older_younger, */
        "` (backtick)",                 /* err_backtick_expected, */
    };


int yyerror(char *s)
{
    util_incError();
    printf ("[%s] Line %d", util_sourceName(), yylineno);

    if (!yytext[0])
        puts (": Unexpected end of file.");
    else
        printf(" at '%s': '%s'%s\n", yytext, err_msg[gp_parse_error],
            gp_parse_error == err_in_expression ?
                ""
            :
                " expected"
        );

    return 0;
}