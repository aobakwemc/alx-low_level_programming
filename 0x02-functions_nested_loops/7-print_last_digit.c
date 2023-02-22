#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @c: parameter accepting int argument
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int last_digit = c % 10;

		if (last_digit < 0)
			last_digit *= -1; /*change to +ve if -ve*/

		_putchar(last_digit + '0');

		return (last_digit);
}
