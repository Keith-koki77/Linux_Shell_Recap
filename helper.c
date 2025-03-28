#include "shell.h"

/**
 * _strdup - function that duplicates string arguments
 * @str: pointer to the character values
 *
 * Return: the duplicated string.
 */
char *_strdup(const char *str)
{
	int len = strlen(str);
	char *dup = malloc(len + 1);

	if(!dup)
		return (NULL);

	strcpy(dup, str);
	return (dup);
}

/**
 * _strcmp - function that compares the string
 * @s1: pointer to the first string of type character
 * @s2: pointer to th4e second string of type character
 *
 * Return: both strings
 */
int _strcmp(const char *s1, const char *s2)
{
	return strcmp(s1, s2);
}

void free_args(char **args)
{
	int i;

	for(i = 0; args[i]; i++)
	{
		free(args[i]);
	}
	free(args);
}
