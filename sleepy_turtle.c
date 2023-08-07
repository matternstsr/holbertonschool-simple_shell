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
		num_char = read(STDIN_FILENO, user_input, bsize);
	}
	return (num_char);
}
