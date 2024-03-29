#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: character
 * Return: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
