#include "main.h"

/**
 * print_alphabet - print the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}
	_putchar('\n');
}

