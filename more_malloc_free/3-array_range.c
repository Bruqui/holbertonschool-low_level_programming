#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: The first value of the array
 * @max: The last value of the array
 * Return: array
 */

int *array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
		return (NULL);

	result = malloc((max - min + 1) * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		result[i] = min + i;

	return (result);
}
