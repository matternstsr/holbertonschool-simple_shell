#include "shellshocked.h"

/**
 * sleep_turtle - Checks for inactive and feeds data
 * @user_input: place to store the data
 * @bsize: buffer size
 *
 * Return: num of characters in getline
 */
int sleepy_turtle(char *user_input, size_t bsize)
{
	int num_char = 0;
	
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "", bsize);
		num_char = getline(&user_input, &bsize, stdin);
	}
	return (num_char);
}
