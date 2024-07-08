#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: result or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, length = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	result = malloc((length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[length++] = s1[i];

	for (i = 0; s2[i]; i++)
		result[length++] = s2[i];

	return (result);
}
