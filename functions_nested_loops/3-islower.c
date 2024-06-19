#include "main.h"

/**
 * _islower - show if is a lowercase character
 * Return: always 0 (success)
 * @c: the number to check
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
