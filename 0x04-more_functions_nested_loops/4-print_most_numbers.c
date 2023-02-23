/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 */
#include "main.h"

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 9)
		{
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
