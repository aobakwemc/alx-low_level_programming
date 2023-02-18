#include <stdio.h>
/**
 * main - program's entry point
 * Return: 0 (success)
 */
int main(void)
{
	/**
	 * print base 16 numbers (hex) in lowercase
	 * loop through 0-9 printing ASCII value of characters
	 * loop through A-F (hex numbers) and print them
	 */
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0'); /*prints ASCII character value of num*/
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
