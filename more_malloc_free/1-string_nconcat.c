#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, i;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length1++;
	
	for (i = 0; s2[i]; i++)
                length2++;

	if (n > length2)
		n = length2;

	result = malloc(length1 + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	for (i = 0; i < length2; i++)
                result[length1 + i] = s2[i];

	result[length1 + n] = '\0';

	return (result);
}
