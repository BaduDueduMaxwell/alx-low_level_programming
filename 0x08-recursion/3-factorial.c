#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: an integer param
 * Return: an integer
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
