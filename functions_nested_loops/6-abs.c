#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
