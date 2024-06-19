#include "main.h"

/**
 * print_alphabet_x10 - that 10 prints alphabet
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	for (; i < 10; i++)
	{
		char c = 'a';
		for (; c <= 'z'; c++)
			_putchar(c);
	}
	_putchar('\n');
}
