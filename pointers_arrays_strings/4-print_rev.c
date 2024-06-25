#include "main.h"

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		while (i>= 0)
		{
			_putchar(s[i]);
			i--;
		}
		i--
	}
	_putchar('\n');
}
