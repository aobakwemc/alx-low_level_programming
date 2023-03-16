/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of memory bytes to allocate
 * Return: pointer to the allocated memory
 */
#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
		exit(98);

	return (space);
}
