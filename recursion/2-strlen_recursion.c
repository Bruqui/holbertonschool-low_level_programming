#include "main.h"

/**
 * _strlen_recursion - function that return a length of the string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
