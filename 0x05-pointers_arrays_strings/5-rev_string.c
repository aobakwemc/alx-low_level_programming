/**
 * rev_string - reverses a string.
 * @s: parameter accepting string
 */
#include "main.h"

void rev_string(char *s)
{
	int reverse = 0, length = 0;
	char temp;

	while (s[reverse++])
	{
		length++;
	}

	for (reverse = length - 1; reverse >= length / 2; reverse--)
	{
		temp = s[reverse];
		s[reverse] = s[length - reverse - 1];
		s[length - reverse - 1] = temp;
	}
}
