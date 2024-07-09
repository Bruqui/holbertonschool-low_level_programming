#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @size: the size of the memory to print
 * @nmemb: The number of elements
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *result;

	if (size == 0 || nmemb == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		result[i] = 0;

	return (result);
}
