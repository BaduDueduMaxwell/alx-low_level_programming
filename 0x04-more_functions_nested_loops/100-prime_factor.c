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
		if (num2 % num == 0 && num2 % 1 == num2)
		{
			printf("%ld", num2);
		}
	}
	printf("/n");

	return (0);
}
