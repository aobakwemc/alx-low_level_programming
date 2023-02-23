/**
 * main - adds all multiples of 5 or 3
 * below 1024 together.
 * Return: 0 (always)
 */
#include <stdio.h>

int main(void)
{
	int x, total = 0;

	for (x = 0; x <= 1023; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			total = total + x;
	}
	printf("%d\n", total);

	return (0);
}
