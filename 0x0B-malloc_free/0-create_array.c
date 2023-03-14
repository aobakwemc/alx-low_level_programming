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
	if (size == 0)
		return NULL;
	else if (size > 0)
	{
		char *g = (char *)malloc(sizeof(char)*size);
		g[0] = c;
	}
}
