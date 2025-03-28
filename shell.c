#include "shell.h"

/**
 * void_prompt - function that starts the prompt and prints the '$' sign
 *
 * Return: void
 */
void prompt(void)
{
	printf("$ ");
}

/**
 * read_line - function that reads the line (prompts)
 *
 * Return: the contents of the prompt
 */
char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;

	getline(&line, &len, stdin);
	
	return (line);
}

/**
 * parse_input - function that traverses the arguments
 * @input: pointer to character type
 *
 * Return: the arguments
 */
char **parse_input(char *input)
{
	char **args = malloc(64 * sizeof(char *));
	char *token;
	int i = 0;

	token = strtok(input, " \n");

	while(token != NULL)
	{
		args[i++] = _strdup(token);
		token = strtok(NULL, " \n");
	}
	args[i] = NULL;
	return (args);
}
