#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: The string tp be encoded
 * Return: A pointer to the encoded string
 */

char *leet(char *n)
{
	int k, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (r = 0; r < 10; r++)
		{
			if (n[k] == s1[r])
			{
				n[k] = s2[r];
			}
		}
	}
	return (n);
}
