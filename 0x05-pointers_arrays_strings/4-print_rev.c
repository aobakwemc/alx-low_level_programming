/**
 * print_rev - prints a string in reverse
 * @s: parameter accepting string
 */
#include "main.h"

void print_rev(char *s)
{
	int reverse, myString = 0;

	while (s[myString] != '\0')
	{
		myString++;
	}

	for (reverse = myString - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]); /*print characters collected in reverse as a string*/
	}

	_putchar('\n');
}
