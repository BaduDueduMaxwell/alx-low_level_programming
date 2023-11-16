#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as parameter
 * @array: target array
 * @action: pointer tot the function
 * @size: size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0; count < size; count++)
	{
		(action)(*array);
		array++;
	}
}
