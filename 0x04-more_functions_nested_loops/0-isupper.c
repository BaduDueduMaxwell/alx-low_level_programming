#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check for uppercase char
 *
 * Return: Always 0
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
