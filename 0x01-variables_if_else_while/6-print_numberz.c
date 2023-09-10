#include <stdio.h>

/**
 * main - prints numbers using putchar
 *
 * Return: 0
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
