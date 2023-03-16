/**
 * _realloc - reallocates a memory block
 * using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: byte size of allocated space for ptr
 * @new_size: byte size of newly allocated space
 * Return: Null if new_size == 0 , ptr is not null.
 * ptr if new_size == old_size
 * pointer to newly allocated memory block
 */
#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, limit;
	char *ptr_copy;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	limit = new_size;
	if (new_size > old_size)
		limit = old_size;

	ptr_copy = ptr;
	for (i = 0; i < limit; i++)
		p[i] = ptr_copy[i];

	free(ptr);

	return (p);
}

