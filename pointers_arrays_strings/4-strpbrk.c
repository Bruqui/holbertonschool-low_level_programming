#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes
 * Return: 0 or s
 */

char	*_strpbrk(char *s, char *accept)
{
	char	*p;

	for (; *s; ++s)
	{
		for (p = accept; *p; ++p)
		{
			if (*s == *p)
				return (s);
		}
	}
	return (0);
}
