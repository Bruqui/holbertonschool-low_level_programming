#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: result or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j;
	
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	result = malloc(sizeof(char) * (n + j + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[j + i] = s2[i];

	result[j + i] = '\0';

	return (result);
}
