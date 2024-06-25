#include "main.h"

void puts_half(char *str)
{
	int i;

	for (i = strlen(str) / 2; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
