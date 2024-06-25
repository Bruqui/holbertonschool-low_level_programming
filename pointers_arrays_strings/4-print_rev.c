#include "main.h"

void print_rev(char *s)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		while (i>= 0)
		{
			_putchar(str[i]);
			i--;
		}
		i++;
	}
	_putchar('\n');
}
