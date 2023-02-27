/**
 * puts_half - prints half of a string
 * followed by a new line.
 * @str: parameter accepting string
 */
#include "main.h"

void puts_half(char *str)
{
	int index = 0, length = 0, c;

	while (str[index++])
		length++;

	if (length % 2 == 0)
		c = length / 2;
	else
		c = (length + 1) / 2;

	for (index = c; index < length; index++)
		_putchar(str[index]);

	_putchar('\n');
}
