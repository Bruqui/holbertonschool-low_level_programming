#include "main.h"

/**
 * print_numbers - prints numbers form 0 to 9
 */

void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
}
