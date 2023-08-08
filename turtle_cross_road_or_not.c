#include "shellshocked.h"

/**
 * turtle_cross_road_or_not - launches input command with its arguments
 * @in_array: The command to be executed.
 * @dir_name: The command.
 * Return: void
 */
void turtle_cross_road_or_not(char **in_array, char *dir_name)
{
	int length = 0, length1 = 0;
	char *full_path;
	char *d_name = "\0";

	if (dir_name != NULL)
		d_name = dir_name;
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
	free(dir_name);
	launch_turtle(in_array);
}

/**
 * launch_turtle - Runs given command
 * @in_array: Given input
 *
 * Return: No Return
 */
void launch_turtle(char **in_array)
{
	pid_t launch = 0;
	char **envp = NULL;
	int status = 0;

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
}
