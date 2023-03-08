/**
 * factorial - returns the factorial of
 * a given number.
 * @n: parameter/argument taken to function.
 * Return: If n > 0 - the factorial of n.
 * If n < 0 - 1 to indicate an error
 */
#include "main.h"

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
