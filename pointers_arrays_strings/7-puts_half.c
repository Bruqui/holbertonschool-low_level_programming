#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, j, k;

	k = 0;

	while (str[k] != '\0')
	{
		k++;
	}

	if (k % 2 == 0)
	{
		for (i = k / 2; str[i] != '\0' ; i++)
		{
			_putchar(str[i]);
		}
	}
	else (k % 2)
	{
		for (j = (k - 1) / 2; j < k - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
