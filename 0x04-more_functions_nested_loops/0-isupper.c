#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Checks if a character input is upper case
 * @c: character to check
 * Return: 1 if character is upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
