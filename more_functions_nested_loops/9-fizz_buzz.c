#include <stdio.h>

/**
 * main - print number from 1 to 100 with fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i > 9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else if (i < 9)
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
