#include "shellshocked.h"
/**
 * turtle_surgery - parses/tokenizes input into string vector
 * @input: object string
 * @cmdS: destination string vector
 * @delim: delimiter to be fed to splitting/tokenizing function
 *
 * Return: 0 if input parsed to cmdS, -1 otherwise
 */

int turtle_surgery(char *input, char **in_array)
{
	int iter = 0;
	char *cmdT = NULL, *dup = NULL;
	char *delim = " \t\n\r";

	for (dup = input, iter = 0; (cmdT = shell_cracked(&dup, delim)); iter++)
	{
		in_array[iter] = cmdT;
		if (strncmp("exit", in_array[0], 4) == 0)
		{
			if (input)
				free(input);
			free(in_array);
			exit(st);
		}
		if (strncmp("env", in_array[0], 3) == 0)
		{
			turtle_pen(environ);
			free(in_array);
			return (150);
		}
		st = 2;
	}
	if (cmdT != NULL)
		cmdT = NULL;
	if (dup != NULL)
		free(dup), dup = NULL;
	return (iter);
}

/**
 * turtle_size - parses/tokenizes input into string vector
 * @input: object string
 *
 * Return: Size of array is needed
 */

int turtle_size(char *input)
{
        int index;
        char *input_copy, *copy_copy;
        char *delim2 = " \t\n\r";

        input_copy = strdup(input);
	copy_copy = input_copy;
	for (index = 0; input_copy != NULL;  index++)
		shell_cracked2(&input_copy, delim2);
        free(copy_copy);
	return (index);
}
