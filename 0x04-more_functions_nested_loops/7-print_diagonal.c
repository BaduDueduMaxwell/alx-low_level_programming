#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: number of times the backslash character should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int count;
		int space;

		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
