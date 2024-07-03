#include "stdio.h"

/**
 * main - print the number of arguments passed to the progra
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
