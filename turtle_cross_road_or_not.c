#include "shellshocked.h"

/**
 * turtle_cross_road_or_not - launches input command with its arguments
 * @input: The command to be executed.
 * @argv: The arguments to the command.
 * Return: void
 */
void turtle_cross_road_or_not(char **in_array, char *dir_name)
{
	pid_t launch = 0;
	int status = 0, length = 0, length1 = 0;
	char *full_path;
	char **envp = NULL;
	char *d_name = "\0";

	if (dir_name != NULL)
		d_name = dir_name;
	printf("d_name = %s\n", d_name);
	length = strlen(d_name);
	length1 = strlen(in_array[0]);
	full_path = malloc(length + length1 + 2);
	full_path[0] = '\0';
	strcat(full_path, d_name);
	strcat(full_path, "/");
	strcat(full_path, in_array[0]);
	length = strlen(full_path);
	full_path[length] = '\0';
	in_array[0] = strdup(full_path);
	free(full_path);
	launch = fork();
	if (launch == -1)
	{
		perror(in_array[0]), exit(EXIT_FAILURE);
	}
	else if (launch == 0)
	{
		if (execve(in_array[0], in_array, envp) == -1)
		{
			perror(in_array[0]), exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);
	free(in_array[0]);
}
