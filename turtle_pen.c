#include "shellshocked.h"

/**
 * turtle_pen - Prints environtmental variables
 * @environ: Current environmental variables
 *
 * Return: No return
 */
void turtle_pen(char **environ)
{
	char **env2 = environ;
	int index = 0;

	while (env2[index] != NULL) 
	{
		printf("%s\n", env2[index]);
		index++;
	}
}
