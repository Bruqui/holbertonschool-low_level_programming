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
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if ((operator == NULL) || (argv[2][1]))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
