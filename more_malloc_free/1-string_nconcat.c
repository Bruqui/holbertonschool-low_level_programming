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
	unsigned int length, i;
	char *result;
	int j = 0;

	length = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	result = malloc((length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		result[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		result[j++] = s2[i];

	result[j] = '\0';

	return (result);
}
