#include "main.h"

/**
 * set_bit - sets given index of a bit to 1.
 * @n: points the number to change
 * @index: bit index is set to 1
 *
 * Return: if successful 1, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

