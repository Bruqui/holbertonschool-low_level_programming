#include "main.h"

/**
 * _isalpha - show if is a lowercase and uppercase character
 * Return: always 0 (success)
 * @c: the number to check
 */

int _isalpha(int c)
{
	char c;

	if (isalpha(c))
		return (1);
	else
		return (0);
}
