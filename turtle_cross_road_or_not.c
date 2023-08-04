#include "shell.h"

/**
 * turtle_cross_road_or_not - launches input command with its arguments
 * @input: The command to be executed.
 * @argv: The arguments to the command.
 * Return: void
 */
void turtle_cross_road_or_not(char *input, char **argv)
{
	pid_t launch = 0;
	int status = 0;
	char *dir_name;
	char *full_path;
	char **envp = NULL;

	dir_name = turtle_or_not(environ, argv[0]);
	if (dir_name == NULL)
		return;
	full_path = malloc(strlen(dir_name) + strlen(argv[0]) + 2);
	full_path[0] = '\0';
	strcat(full_path, dir_name);
	strcat(full_path, "/");
	strcat(full_path, argv[0]);
	argv[0] = strdup(full_path);
	free(full_path);
	launch = fork();
	if (launch == -1)
	{
		perror(argv[0]), exit(EXIT_FAILURE);
	}
	else if (launch == 0)
	{
		if (execve(argv[0], argv, envp) == -1)
		{
			perror(argv[0]), free(input), exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);
}
