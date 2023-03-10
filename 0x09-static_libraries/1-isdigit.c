/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: accepts char argument as int equivalent of ASCII value
 * Return: 1 if c is digit, 0 if otherwise
 */
#include "main.h"

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
