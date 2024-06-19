#include "main.h"

/**
 * _isalpha - show if is a lowercase and uppercase character
 * Return: always 0 (success)
 * @c: the number to check
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
