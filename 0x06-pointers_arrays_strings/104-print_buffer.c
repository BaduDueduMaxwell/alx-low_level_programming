#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: The buffer to print.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		for (j = i; j < i + 10; j++)
		{
			if (j < size && (b[j] >= 32 && b[j] <= 126))
				printf("%c", b[j]);
			else if (j < size)
				printf(".");
			else
				printf(" ");
		}

		printf("\n");
	}
}
