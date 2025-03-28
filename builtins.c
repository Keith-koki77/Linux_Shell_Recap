#include "shell.h"

/**
 * shell_exit - function that exits the shell
 *
 * Returns: 0 on exit
 */
void shell_exit(void)
{
	exit (0);
}

/**
 * shell_env - function that creates the shell environment
 *
 * Return: void
 */
void shell_env(void)
{
	extern char **environ;
	int i;

	for(i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}
}
