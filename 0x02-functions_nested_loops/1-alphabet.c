#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}
	_putchar('\n');
}

