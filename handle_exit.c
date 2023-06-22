#include "main.h"
/**
 * handle_exit - function that handle the termination of a shell program
 * @arg: array of string represent command line with arguments
 *@line: the user input command
 *@exitstatus: exit status with the shell program
 *Return: -
 */
void handle_exit(char *arg[], char *line, int exitstatus)
{
	if (arg[1])
	{
		if (is_valid_exit_number(arg[1]))
		{
			exitstatus = atoi(arg[1]);
		}
		else
		{
			fprintf(stderr, "./shell: exit: you can't exit with number: %s\n", arg[1]);
			exitstatus = 2;
		}
	}
	else if (exitstatus == -1)
	{
		exitstatus = EXIT_SUCCESS;
	}

	free(line);
	exit(exitstatus);
}
/**
 * is_valid_exit_number - checks if the argument is a valid exit number or not
 *@arg: argument
 *Return: 1 or 0
 */
int is_valid_exit_number(char *arg)
{
	if (arg[0] != '-' && check_if_numeric(arg))
		return (1);
	else
		return (0);
}
