#include "variadic_functions.h"
/**
 * sum_them_all - function that returns
 * the sum of all its parameters
 * @n: num of parameters.
 * Return: if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	unsigned int sum = 0;

	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);

	va_end(vl);

	return (sum);
}
