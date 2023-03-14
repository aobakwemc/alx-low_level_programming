/**
 * alloc_grid -  returns a pointer to a
 * 2 dimensional array of integers with each
 * element initialised to 0.
 *
 * @width: width of the 2-dimensional array.
 * @height: height of the 2-dimensional array
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */
#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int h, w;
	int **dd;

	if (width <= 0 || height <= 0)
		return (NULL);

	dd = malloc(sizeof(int *) * height);

	if (dd == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		dd[h] = malloc(sizeof(int) * width);

		if (dd[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(dd[w]);
																							free(dd);
																							return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			dd[h][w] = 0;
		}
	}
	return (dd);
}
