#include "main.h"

/**
 * print_numbers - prints numbers form 0 to 9
 */

void	print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
		if (i != '2' && i != '4')
			_putchar(i + '0');
	_putchar('\n');
}
