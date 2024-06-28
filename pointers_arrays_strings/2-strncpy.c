#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && n > 0; i++, n--)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
