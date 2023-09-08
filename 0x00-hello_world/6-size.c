#include <stdio.h>
/**
 *
 * main - Entry point
 * Return: 0 if successful
 */

int main(void)
{
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of char: %s byte(s)\n", sizeof(char));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));

	return (0);
}