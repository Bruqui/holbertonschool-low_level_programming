#include "main.h"

void puts_half(char *str)
{
	int i;

	for (i = _strlen(str) / 2; i < _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
