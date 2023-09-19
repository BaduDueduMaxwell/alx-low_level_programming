#include <stdio.h>

/**
 * void_more_numbers(void) - prints 10 times the num, 0-14
 * @void - character
 * Return: 0-14 ten times
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putchar('0' + num / 10);
			}
			putchar('0' + num % 10);
		}
		putchar('\n');
		count++;
	}
}
