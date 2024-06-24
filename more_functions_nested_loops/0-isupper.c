#include "main.h"

/**
 * _isupper - show if is a lowercase character
 * Return: always 0 (success)
 * @c: the number to check
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
