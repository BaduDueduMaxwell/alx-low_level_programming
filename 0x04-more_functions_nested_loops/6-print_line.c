#include "main.h"
#include <stdio.h>

/**
 * void print_line - draw straight line
 * @n: number of dashes to print
 * Return: straight line
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
