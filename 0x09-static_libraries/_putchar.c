#include <unistd.h>

/**
 * _putchar - write the char num to stdout
 * @num: variable
 * Return: Always 0
 */
int _putchar(char num)
{
	return (write(1, &num, 1));
}
