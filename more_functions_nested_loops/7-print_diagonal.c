#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: numbers of line to draw
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for (j = 0; j < i; j++)
			_putchar(' ');
	}
	_putchar('\n');
}
