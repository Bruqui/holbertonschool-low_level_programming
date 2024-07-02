#include "main.h"

/**
 * _sqrt_help - recurses to find the natural
 * @n: number
 * @i: sqrt root
 */

int _sqrt_help(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (_sqrt_help(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	if (n <= 1)
		return (-1);
	else
		return (_sqrt_help(n, 1));
}
