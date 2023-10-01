#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int count;
	int product = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			product *= atoi(argv[count]);
		}
		printf("%d\n", product);
	}
	printf("Error");
	return (0);
}
