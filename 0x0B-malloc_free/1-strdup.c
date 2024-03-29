#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy of the string
 * @str: pointer value
 * Return: pointer on success, and NULL on fail
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
