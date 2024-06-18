#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int c = 0;
	{
		for (c = 'z'; c >= 'a'; c++)
			putchar(c);
		putchar('\n');
		return (0);
	}
}
