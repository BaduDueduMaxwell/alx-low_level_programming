#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that get the length of a prefix substring
 * @s: number of bytes in the initial segment
 * @accept: accepted bytes
 * Return: length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	int i;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				found = 1;
				break;
			}
			if (!found)
			{
				break;
			}
		}
		s++;
	}
	return (length);
}
