#include <stdio.h>
#include <math.h>

/**
 * Checks if a number is prime.
 *
 * @param n The number to check for primality.
 * @return 1 if the number is prime, 0 otherwise.
 */
int is_prime(long n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	for (long i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
	}

	return (1);
}

/**
 * Finds the largest prime factor of a given number.
 *
 * @param n The number for which to find the largest prime factor.
 * @return The largest prime factor of the given number.
 */
long largest_prime_factor(long n)
{
	long max_prime = -1;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}


	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max_prime = n;

	return max_prime;
	}
}

int main(void)
{
	long number = 612852475143;
        long largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);
	return (0);
}
