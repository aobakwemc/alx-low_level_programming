/*
 *
 * more_numbers - prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 */
#include "main.h"

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int x;

		for (x = 0; i <= 14; x++)
		{
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
