#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int i = 0;
	{
		for (; i < 16; i++)
		{
			if (i < 10)
				putchar(i + '0');
			else
				putchar(i - 10 + 'a');
		}
		putchar('\n');
		return (0);
	}
}
