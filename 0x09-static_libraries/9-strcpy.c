/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer for copying string to.
 * @src: string to copy
 * Return: the pointer to dest
 */
#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
