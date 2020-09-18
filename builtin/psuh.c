/*
 * Builtin "git psuh"
 *
 * Print "Pony Saying ‘Um, Hello"
 */

#include "builtin.h"

int cmd_psuh(int argc, const char **argv, const char *prefix)
{
    printf(_("Pony says Hello!\n"));
    return 0;
}