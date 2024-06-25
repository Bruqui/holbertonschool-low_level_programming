#include "main.h"

void print_rev(char *s)
{
	int i;

	char *s;

	i = 0;

	while (s[i] != '\0')
	{
		;
		for (i = strlen(*s) - 1; i >= 0; i--)
			_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
