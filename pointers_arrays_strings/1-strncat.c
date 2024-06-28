#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0' && n > 0; j++, n--)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
