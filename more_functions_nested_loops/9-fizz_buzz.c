#include "main.h"

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
			tens = i / 10;
			units = i % 10;
			printf("%d%d", tens, units);
		}
		else if (i < 9)
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
