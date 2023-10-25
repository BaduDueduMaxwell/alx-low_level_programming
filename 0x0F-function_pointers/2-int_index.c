#include <stddef.h>
/**
 * int_index - Search for an integer in an array using a comparison function
 * @array: The array to search in
 * @size: The number of element in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: The index of the first element on success and return 0 on fail
 * If no element matches of if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}