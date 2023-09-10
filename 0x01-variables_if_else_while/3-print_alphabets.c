#include <stdio.h>

/**
 * main - a-z, A-Z
 *
 * Return: 0 if successful
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		for (letter = 'A'; lettr <= 'Z'; letter++)
	{
		putchar(letter);
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
