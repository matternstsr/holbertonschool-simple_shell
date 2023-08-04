#include "shell.h"

/**
 * check_turtle - Check if dir and or file exist
 * @f_name: File to check for
 * @dir_name: Dir to check
 *
 * Return: -1 for no file, 0 for no dir, 1 for both
 */
int check_turtle(char *f_name, char *dir_name) 
{
	char *path_name; 
	struct stat stat_buf;
	int stat_result;
	char *temp_dir;
	char *temp_f;

	temp_f = strdup(f_name);
	if (dir_name == NULL)
	{
		stat_result = stat(f_name, &stat_buf);
		if (stat_result == 0)
		{
			free(temp_f);
			return (1);
		}
		else
		{
			free(temp_f);
			return (-1);
		}
	}
	temp_dir = strdup(dir_name);
	if (access(dir_name, F_OK) != 0)
	{
		free(temp_dir);
		free(temp_f); 	       
		return (0);
	}
	path_name = malloc(strlen(temp_dir) + strlen(temp_f) + 2);
	strcpy(path_name, dir_name);
	strcat(path_name, "/");
	strcat(path_name, f_name);
	stat_result = stat(path_name, &stat_buf);
	if (stat_result != 0)
	{
		free(path_name);
		free(temp_dir);
		free(temp_f);
		return (-1);
	}
	free(temp_dir);
	free(temp_f);
	free(path_name);
	return (1);
}
