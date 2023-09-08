#include <stdio.h>
/**
 *
 * main - Entry point
 * Return: 0 if successful
 */

int main(void)
{
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of char: %s bytes\n", sizeof(char));
	printf("Size of double: %d bytes\n", sizeof(double));
	printf("Size of float: %d bytes\n", sizeof(float));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));

	return (0);
}
