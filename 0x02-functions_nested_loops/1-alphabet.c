#include "main.h"

/**
* print_alphabet - This function prints the lowercase alphabet from 'a' to
* 'z' followed by a newline character '\n'.
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
