#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: the string gived as parameter to be copied
 *  Return: the new string or NULL if str=NULL
 */

char *_strdup(char *str)
{
	int length;
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';
	return (duplicate);
}
