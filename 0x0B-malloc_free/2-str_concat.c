#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - length of strings
 * @s: string to calculate the length
 * Return: the length of the string
 */
int str_len(char *s)
{
	int length = 0;

	if (s == NULL)
	{
		return (1);
	}

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a new string containing the concatenation of s1 and s2,
 * and  NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2, total_len, i, j;

	len1 = str_len(s1);
	len2 = str_len(s2);
	total_len = len1 + len2 + 1;

	result = malloc(sizeof(char) * total_len);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
