#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int stringLength;
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);
	for (stringLength = 0; b[stringLength] != '\0'; stringLength++)
	{
		if (b[stringLength] != '0' && b[stringLength] != '1')
			return (0);
	}
	for (stringLength = 0; b[stringLength] != '\0'; stringLength++)
	{
		num <<= 1; /*left shift by 1 place*/
		if (b[stringLength] == '1')
			num += 1;
	}
	return (num);
}
