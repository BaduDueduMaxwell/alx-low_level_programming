#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 *
 * Return: 0 on fail, pointer on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}

	unsigned int total_len = len1 + n;

	ptr = (char *)malloc(total_len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		ptr[j] = s2[j];
	}

	ptr[i + j] = '\0';
	return (ptr);
	
}
