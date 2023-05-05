#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to bit
 * @index: index starting from 0 of the bit assessed/returned
 * Return: 1 if it worked, -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	z = ~(1 << index);
	*n = *n & z;

	return (1);
}

