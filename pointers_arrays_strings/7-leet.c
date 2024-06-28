#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: The string tp be encoded
 * Return: A pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (s[i] == s1[j])
				n[i] = s2[j];
	return (n);
}
