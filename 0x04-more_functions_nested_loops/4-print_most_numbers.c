#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers from 0-9
 * @void - character
 * Do not return 2 and 4
 * Return: prints the numbers
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if ((num == 2) || (num == 4))
		{
			continue;
		}
		else
			putchar('0' + num);
	}
	putchar('\n');
}
