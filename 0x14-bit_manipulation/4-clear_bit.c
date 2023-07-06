#include "main.h"

/**
 * clear_bit - given bit value set to 0
 * @n: points to the number to be converted
 * @index: bit index to clear
 *
 * Return: success 1, failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

