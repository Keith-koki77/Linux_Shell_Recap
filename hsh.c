#include "shell.h"

/**
 * Main - function that checks the code
 *
 * Return: Always Success (0)
 */
int main(void)
{
	char *input;
	char **args;
	int status = 1;

	while(1)
	{
		prompt();
		input = read_line();
		args = parse_input(input);
		status = excute_command(args);

		free(input);
		free_args(args);

		if(status == 0)
			break;
	}

	return (0);
}
