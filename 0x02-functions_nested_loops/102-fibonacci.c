/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0 (always)*
 */
#include <stdio.h>

int main(void)
{
	int loop;
	unsigned long f1 = 0, f2 = 1, fib;

	for (loop = 0; loop < 50; loop++)
	{
		fib = f1 + f2;
		printf("%lu", fib);

		f1 = f2;
		f2 = fib;

		if (loop == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
