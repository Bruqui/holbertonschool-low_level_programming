#include "stdio.h"
#include "stdlib.h"

/**
 * main - multiplies two numbers
 * @argc: number of agument
 * @argv: array of arguments
 * Return: result of multiplies two numbers
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
