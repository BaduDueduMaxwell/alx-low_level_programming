#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers 0-14 followed by a newline
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
