#include "stdio.h"
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: count the arguments
 * @argv: array of argument
 * Return: result of add
 */

int main(int argc, char *argv[])
{
	int num, i;
	int result = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 1; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[num]);
	}
	printf("%d\n", result);
	return (0);
}
