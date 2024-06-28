#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 * Return: *s1 - *s2 or 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
