#include <stdio.h>
#include <limits.h>

/**
 * main - single digits, base 10
 *
 * Return: 0 successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	putchar('\n');

	return (0);
}
