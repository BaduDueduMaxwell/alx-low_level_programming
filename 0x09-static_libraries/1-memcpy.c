#include "main.h"

/**
 * _memcpy -function to copy memory area
 * @dest: the first pointer of the memory to print
 * @src: the second pointer of the memory to print
 * @n: number of bytes in memory area
 * Return: dest if successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
