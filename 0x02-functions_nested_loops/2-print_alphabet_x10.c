#include <stdio.h>
/**
 * main - entry point for program
 * Return: 0 (success)
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	putchar('\n');
	return (0);
}
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		i++;
	}

}
