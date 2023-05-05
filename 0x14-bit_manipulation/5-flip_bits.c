#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 * @n: number given
 * @m: number to flip argument n to
 * Return: number of bits required to flip
 * to get from argument n to argument m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, numOfBits = 0;

	while (xor > 0)
	{
		numOfBits += (xor & 1);
		xor >>= 1;
	}

	return (numOfBits);
}

