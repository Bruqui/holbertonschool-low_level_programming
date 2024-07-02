#include "main.h"

/**
 * divisor - checks if a number is divisible
 * @n: number to evaluate
 * @i: the divisor
 * Return: 0 or 1
 */

int divisor(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == (n / 2))
		return (1);
	else
		return (divisor(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 *  @n: the number to be checked
 *  Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divisor(n, 2));
}
