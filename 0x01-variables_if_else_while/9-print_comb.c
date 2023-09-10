
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num;

	for (num = 0; num <= 8; num++)
	{
		putchar(num + '0');
		putchar(',',' ');
	}
	putchar('9');
	putchar('\n');

	return (0);
}
