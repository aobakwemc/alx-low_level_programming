/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz
 * Return: 0 (success)
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		if (i != 100)
			printf(" ");
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
