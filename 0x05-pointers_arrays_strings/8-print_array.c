/**
 * print_array -  prints n elements of an array of integers
 * @n: number of elements of the array to be printed
 * @a: the array
 */
#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

		if (c != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
