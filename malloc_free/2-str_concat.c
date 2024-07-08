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
	int i, test = 0, length = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	result = malloc(length * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[test++] = s1[i];

	for (i = 0; s2[i]; i++)
		result[test++] = s2[i];

	return (result);
}
