#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int c = 0;
	{
		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
		for (c = 'A'; c <= 'Z'; c++)
			putchar(c);
		putchar('\n');
		return (0);
	}
}
