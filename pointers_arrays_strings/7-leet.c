#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: The string tp be encoded
 * Return: A pointer to the encoded string
 */

char *leet(char *s)
{
	int i = 0;
	char leet[256] = {0};

	leet['a'] = leet['A'] = '4';
	leet['e'] = leet['E'] = '3';
	leet['o'] = leet['O'] = '0';
	leet['t'] = leet['T'] = '7';
	leet['l'] = leet['L'] = '1';

	while (s[i] != '\0')
	{
		if (leet[(unsigned char)s[i]] != 0)
		{
			s[i] = leet[(unsigned char)s[i]];
		}
		i++;
	}
	return (s);
}
