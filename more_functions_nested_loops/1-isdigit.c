#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: always 0 (success)
 * @c: the number to check
 */


int _isdigit(int c)
{
	if (c >= '0' && c < '10')
		return (1);
	else
		return (0);
}
