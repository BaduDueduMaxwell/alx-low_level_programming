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
		int count;

		for (count = 0; count <= size; count++)
		{
			putchar('#');
			count++;
		}
		putchar('\n');
	}
}
