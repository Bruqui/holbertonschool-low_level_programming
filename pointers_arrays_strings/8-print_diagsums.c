#include "main.h"

/**
 * print_diagsums - main function
 * @size: function parameter
 * @a: function parameter
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 += a[i * size + i];
		num2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", num1, num2);
}
