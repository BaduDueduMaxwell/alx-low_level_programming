#include <stdio.h>
#include <unistd.h>
/**
 * main - print exactly the dataand return 1
 *
 * Return: program returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
