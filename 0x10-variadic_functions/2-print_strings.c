/**
 * print_strings - prints strings,
 * followed by a new line.
 * @separator: separator string to print between the strings
 * @n: number of strings to print
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Return: void
 */
#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list vl;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}
