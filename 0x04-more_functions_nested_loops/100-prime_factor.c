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
		if (num2 % num == 1 && num2 % num2 == 0)
		{
			printf("%ld", num2);
		}
	}
	printf("/n");
}
