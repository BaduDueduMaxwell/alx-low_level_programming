#include <stdio.h>

/**
 * main - print the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long num;
	long num2 = 612852475143;

	for (num = 1; num <= num2; num++)
	{
		if (num % num2 == 0)
		{
			printf("%ld", num);
		}
	}
	printf("/n");

	return (0);
}
