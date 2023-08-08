#include "shellshocked.h"

/**
 * shell_cracked - splits/tokenizes input string per delimiter(s)
 * @input: input
 * @delim: delimiter(s) by which input is to be divided
 *
 * Return: First token of input
 */

char *shell_cracked(char **input, char *delim)
{
	char *cmdT = NULL;
	int length = 0;

	while ((cmdT = strsep(input, delim)) && !*cmdT)
	{
		length = strlen(cmdT);
		cmdT[length] = '\0';
	}
	return (cmdT);
}

/**
 * shell_cracked2 - tokenizes copy of input to see size
 * @input: input
 * @delim: delimiter(s) by which input is to be divided
 *
 * Return: No return
 */

void shell_cracked2(char **input, char *delim)
{
	char *cmdT = NULL;

	while ((cmdT = strsep(input, delim)) && !*cmdT)
	{
		;
	}
}
