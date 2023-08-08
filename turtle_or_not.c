#include "shellshocked.h"
/**
 * turtle_or_not - get path, then check_turtle
 * @environ: Environmental variables
 * @f_name: The command
 *
 * Return: Correct Directory name or NULL
 */
char *turtle_or_not(char *path, char *f_name)
{
	char *dir_name = NULL, *temp_path; 
	char *free_temp;
	char *token;
	char  buf[1024];
	int turtle;
	
	turtle = check_turtle(f_name, dir_name);
	if (turtle == 1)
	{
		return ("end_it_all");
	}
	dir_name = getcwd(buf, sizeof(buf));
	turtle = check_turtle(f_name, dir_name);
	if (turtle == 1)
		return (dir_name);
	temp_path = strdup(path);
	free_temp = temp_path;
	token = strsep(&temp_path, ":");
	while (token != NULL)
	{
		turtle = check_turtle(f_name, token);
		if (turtle == 1)
		{
			dir_name = strdup(token);
			if (temp_path)
				free(free_temp);
			return (dir_name);
		}
		token = strsep(&temp_path, ":");
	}
	if (temp_path)
		free(free_temp);
	return (NULL);
}
