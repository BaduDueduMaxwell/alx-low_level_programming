#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: an integer
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	else if (guess * guess == n)
	{
		return (guess);
	}
	else
	{
		return (find_sqrt(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find square root.
 *
 * Return: -1 if n does not have a natural square root
 * the natural square of n if otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1));
}
