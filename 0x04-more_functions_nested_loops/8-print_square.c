#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of '#' characters
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int row;
		int column;

		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
