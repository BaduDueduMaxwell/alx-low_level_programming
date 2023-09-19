#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line of underscores
 * @n: number of times to print the underscore character
 */
void print_line(int n)
{
	int count = 1;

	while (count <= n)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		putchar('_');
		count++;
	}
	putchar('\n');
}
