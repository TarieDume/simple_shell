#include "main.h"
/**
 * aux_help - Help information for the builtin help.
 * Return: no return
 */
void aux_help(void)
{
char *help = "help: help [-dms] [pattern ...]\n";
"\tDisplay information about builtin commands.\n ";
"Displays brief summaries of builtin commands.\n";
"help: help [-dms] [pattern ...]\n";
"\tDisplay information about builtin commands.\n ";
"Displays brief summaries of builtin commands.\n";
"alias: alias [-p] [name[=value]...]\n";
"\tDefine or display aliases.\n ";
"cd: cd [-L|[-P [-e]] [-@]] [dir]\n";
"\tChange the shell working directory.\n ";
write(STDOUT_FILENO, help, strlen(help));
}
