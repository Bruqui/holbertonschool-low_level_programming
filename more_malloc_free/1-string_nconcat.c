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
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j < n)
		j = n;
	k = i + n;
	result = malloc(sizeof(char) * (k + 1));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (l = 0; l < k; l++)
		if (l < i)
			result[l] = s1[l];
		else
			result[l] = s2[l - i];

	result[k] = '\0';

	return (result);
}
