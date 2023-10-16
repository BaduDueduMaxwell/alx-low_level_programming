#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
}
