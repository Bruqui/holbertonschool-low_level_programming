#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function given as parameter
 * on each element of an array
 * @array: they array
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		size--;
		array++;
	}
}
