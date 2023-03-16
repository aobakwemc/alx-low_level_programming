/**
 * _calloc -  allocates memory for an array,
 * using malloc.
 * @nmemb: number of elements in the array
 * @size: byte size of array elements
 * Return: if nmemb/size = 0 -->
 * if malloc fails --> _calloc = Null
 */
#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;

	return (c);
}
