#include <stdio.h>
/**
 * main - entry point for program
 * Return: 0
 */
int main(void)
{
	char lowerCase, upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
	{
		putchar(upperCase);
	}
	putchar('\n');
	return (0);
}
