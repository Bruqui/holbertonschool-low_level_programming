#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: numbers of line to draw
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('\\');
	_putchar('\n');
}
