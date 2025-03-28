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
