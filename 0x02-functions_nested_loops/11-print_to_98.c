#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @c: initial number
 */
void print_to_98(int c)
{
	if (c >= 98)
	{
		while (c > 98)
			printf("%d, ", c--);
		printf("%d\n", c);
	}
	else
	{
		while (c < 98)
			printf("%d, ", c++);
		printf("%d\n", c);
	}
}
