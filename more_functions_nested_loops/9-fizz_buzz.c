#include "main.h"

/**
 * main - print number from 1 to 100 with fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;
	int d;
	int u;

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
			d = i / 10;
			u = i % 10;
			printf("%d%d", d, u);
		}
		else if (i < 9)
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
