#include <stdio.h>

/**
 * main - reverse alphabets
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
