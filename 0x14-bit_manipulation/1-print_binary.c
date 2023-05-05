#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /*right shift by 1 place*/

	_putchar((n & 1) + '0'); /*+ ASCII value of 0 (48) */
}

