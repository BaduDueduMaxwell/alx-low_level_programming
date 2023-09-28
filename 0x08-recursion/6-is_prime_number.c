#include "main.h"

/**
 * is_prime - checks if a number is prime recursively
 * @n: the number to check
 * @guess: the current guess (starts at 2)
 * Return: 1 if prime, 0 if not prime
 */
int is_prime(int n, int guess)
{
	if (n <= 1)
	{
		return (0);
	}
	if (guess * guess > n)
	{
		return (1);
	}
	if (n % guess == 0)
	{
		return (0);
	}
	return (is_prime(n, guess + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
