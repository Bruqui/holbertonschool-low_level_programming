#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];

	int (*operation)(int, int) = get_op_func(operator);
	int result = operation(num1, num2);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", result);

	return (0);
}
