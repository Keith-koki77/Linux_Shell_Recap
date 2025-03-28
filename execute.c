#include "shell.c"

/**
 * execute command - function that executes the command of the arguments
 * @args: pointer to pointer of argumnets of character type
 *
 * Return: 0 if successful or 1 if fails
 */
int execute_command(char **args)
{
	pid_t pid;
	int status;

	if(args[0] == NULL)
		return (1);

	if(strcmp(args[0], "exit") == 0)
	{
		shell_exit();
		return (0);
	}

	if(strcmp(args[0], "env") == 0)
	{
		shell_env();
		return (1);
	}

	pid = fork();
	if(pid == 0)
	{
		if(execvp(args[0], args) == -1)
		{
			perror("hsh");
			exit(EXIT_FAILURE);
		}
	}

	else if(pid < 0)
	{
		perror("hsh");
	}
	else
	{
		waitpid(pid, &status, 0);
	}

	return (1);
}
