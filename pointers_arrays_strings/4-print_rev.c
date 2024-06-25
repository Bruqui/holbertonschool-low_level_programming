#include "main.h"

/**
 * print_rev - function that print a string in reverse
 * @s : string to print
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
