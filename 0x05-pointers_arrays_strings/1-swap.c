/**
 * swap_int - swaps the values of two integers.
 * @a: value of a
 * @b: value of b
 */
#include "main.h"

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /*temporarily holds value of a*/
	*a = *b; /*assign value of a to b*/
	*b = temp; /*assign temp value which is a to b*/
}
