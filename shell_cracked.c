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
