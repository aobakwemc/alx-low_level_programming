/**
 * puts2 - prints every other character of a string
 * starting with the first character,
 * followed by a new line.
 * @str: accepts string parameter.
 */
#include "main.h"

void puts2(char *str)
{
	int index = 0, length = 0;

	while (str[index++])
		length++;

	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}

