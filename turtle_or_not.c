#include "shell.h"
/**
 * turtle_or_not - get path, then check_turtle
 * @environ: Environmental variables
 * @f_name: The command
 *
 * Return: Correct Directory name or NULL
 */
char *turtle_or_not(char **environ, char *f_name)
{
	char *path;
	char *dir_name = NULL;
	char  buf[1024];
	int turtle;
	
	turtle = check_turtle(f_name, dir_name);
	path = turtle_path(environ);
	dir_name = getcwd(buf, sizeof(buf));
	turtle = check_turtle(f_name, dir_name);
	if (turtle == 1)
		return (dir_name);
	dir_name = strsep(&path, ":");
	while (dir_name != NULL)
	{
		turtle = check_turtle(f_name, dir_name);
		if (turtle == 1)
			return (dir_name);
		dir_name = strsep(&path, ":");
	}
	return (NULL);
}
