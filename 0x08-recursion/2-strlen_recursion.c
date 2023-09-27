#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - returns length of the string
 * @s: pointer variable
 * Return: value
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (strlen(s));
	}
	else
	{
		return (0);
	}
}
