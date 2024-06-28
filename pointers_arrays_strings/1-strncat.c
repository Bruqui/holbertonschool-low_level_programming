#include "main.h"

/**
 * strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source
 * Return: dest
 */

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
