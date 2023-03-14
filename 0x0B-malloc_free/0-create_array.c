/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: initial element
 * Return: NULL if size = 0
 */
#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *g = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (g == NULL) /*if pointer does not get allocated some memory*/
	{
		return (NULL);
	}

	for (i = 0; i <	size; i++)
		g[i] = c;

	return (g);
}
