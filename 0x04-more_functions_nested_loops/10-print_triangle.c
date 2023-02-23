/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */
#include "main.h"

void print_triangle(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = size - height; width > 0; width--)
				_putchar(' ');

			for (width = 0; width < height; width++)
				_putchar('#');

			if (height == size)
				continue;

			_putchar('\n');
																							}
	}
	_putchar('\n');
}
