/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 */
#include "main.h"

void more_numbers(void)
{
	int counter, number;

	for (counter = 0; counter <= 9; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0'); /*prints 1st digit*/
			}
			_putchar((number % 10) + '0'); /*prints 2nd ASCII digit if number>9*/
		}
	}
		_putchar('\n');
	}
