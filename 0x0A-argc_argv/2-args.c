#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always successful
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
