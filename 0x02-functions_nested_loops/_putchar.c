#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
