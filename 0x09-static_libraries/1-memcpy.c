/**
 * _memcpy - copies memory area.
 * function copies n bytes from memory area src to memory area dest.
 * @dest: pointer to the string memory to copy to.
 * @src: pointer of string to  copy characters from.
 * @n: number of bytes memory to copy from @src.
 * Return: pointer to dest
 */
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];


	return (dest);
}
