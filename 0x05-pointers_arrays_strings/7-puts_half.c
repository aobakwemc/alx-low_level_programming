/**
 * puts_half - prints half of a string
 * followed by a new line.
 * @str: parameter accepting string
 */
#include "main.h"

void puts_half(char *str)
{
	int index = 0, length = 0;

	while (str[index++])
		length++;

	for (index = 0; index < (length - 1) / 2; index++)
		_putchar(str[index]);

	_putchar('\n');
}
