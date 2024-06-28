#include "main.h"
/**
 * cap_string - changes all lowercase letters of a string to uppercase
 * @s: The string to be capitalized
 * Return: A pointer to the changed string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	i++;

	while (s[i] != '\0')
	{
		if (s[i - 1] >= '\t' && s[i - 1] <= '\r')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] >= ' ' && s[i - 1] <= '"')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == ',')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] == '.' || s[i - 1] == ';' || s[i - 1] == '?')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
