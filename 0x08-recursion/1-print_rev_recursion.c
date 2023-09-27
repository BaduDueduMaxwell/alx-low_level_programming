#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion: prints reverse of a string
 * @s: pointer variable
 */
void _print_rev_recursion(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	if (!s)
	{
		return;
	}

	while (start < end)
	{
		char c = s[start];
		s[start] = s[end];
		s[end] = c;
		start++;
		end--;
	}
}
