#include "main.h"
/**
 * aux_help - Help information for the builtin help.
 * Return: no return
 */
void aux_help(void)
{
char *help = "help: help [-dms] [pattern ...]\n";
write(STDOUT_FILENO, help, strlen(help));
}
