#include "main.h"

/**
 * print_times_table - Print the 'n' times table, starting with 0.
 * @n: number of times tables to print
 * Return: void
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}

	for (int a = 0; a <= n; a++)
	{
		print_row(a, n);
	}
}

void print_row(int a, int n)
{
	for (int b = 0; b <= n; b++)
	{
		int c = a * b;
		print_entry(c);

		if (b != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

void print_entry(int c)
{
	if (c > 99)
	{
		_putchar(c / 100 + '0');
		_putchar((c / 10 % 10) + '0');
		_putchar(c % 10 + '0');
	}
	else if (c > 9)
	{
		_putchar(' ');
		_putchar(c / 10 + '0');
		_putchar(c % 10 + '0');
	}
	else if (c > 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(c + '0');
	}
	else
	{
		_putchar('0');
	}
}
