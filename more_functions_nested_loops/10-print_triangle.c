#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
				_putchar(' ');
		for (j = 0; j < i; j++)
				_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
