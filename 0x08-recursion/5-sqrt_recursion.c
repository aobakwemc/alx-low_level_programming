/**
 * _sqrt_recursion - returns the natural
 * square root of a number.
 */
#include "main.h"

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_find(1, n));
}
