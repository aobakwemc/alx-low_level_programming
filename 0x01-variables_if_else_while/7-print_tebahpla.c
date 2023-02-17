#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
