#include <stdio.h>

/**
 * main - a-z aplphabets
 *
 * Return: 0 if successful
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
