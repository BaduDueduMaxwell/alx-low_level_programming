#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0-9
 * @void - character
 * Return: prints numbers with _putchar
 */
void print_numbers(void)
{
	int num

        for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
}
