#include <stdio.h>
/**
 * main - prints the alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
