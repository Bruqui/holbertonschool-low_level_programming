#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to modify.
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);

	mask = 1 << index;

	*n |= mask;

	return (1);
}
