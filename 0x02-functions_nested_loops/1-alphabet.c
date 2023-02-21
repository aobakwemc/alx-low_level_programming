#include <stdio.h>

/**
 * main - entry point for program
 * Return: 0 (success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
/**
 * print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
}
