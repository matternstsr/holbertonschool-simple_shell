#include "shellshocked.h"

/**
 * main - Generates a simple shell
 *
 * Return: 0 on success
 */
int main(void)
{
	int num_char = 0, atty_check = 0, in_array_size = 0;
	int fd = fileno(stdin), st = 0, count = 0;
	size_t bsize = 1024;
	char *user_input, *path = NULL, *dir_name = NULL;
	char **in_array = NULL;

	user_input = malloc(bsize);
	path = turtle_path(environ);
	while (1)
	{
		free(user_input);
		user_input = malloc(bsize);
		if (!isatty(fd))
		{
			num_char = getline(&user_input, &bsize, stdin);
			atty_check = 1;
		}
		else
		{
			printf("%s", prompt);
			num_char = getline(&user_input, &bsize, stdin);
		}
		if (num_char  == -1)
		{
			free(user_input);
			exit(st);
		}
		in_array_size = turtle_size(user_input);
		in_array = malloc(sizeof(char *) * in_array_size);
		count = turtle_surgery(user_input, in_array);
		if ((count == 0) || (count == 150))
		{
			continue;
		}
		dir_name = turtle_or_not(path, in_array[0]);
		if (dir_name != NULL)
		{
			if (dir_name[0] == 'e')
				launch_turtle(in_array);
			else
				turtle_cross_road_or_not(in_array, dir_name);
		}
		st = 2;
		free(user_input);
		free(in_array[0]);
		free(in_array);
		if (atty_check != 0)
		{
			fflush(stdout);
			break;
		}
		num_char = 0;
		fflush(stdout);
	}
	free(path_name);
	return (0);
}
