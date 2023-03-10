/**
 * *_strcat - concatenates two strings.
 * @dest: pointer receiving appended string
 * @src: pointer to string being appended to dest
 * Return: pointer to the resulting string dest
 */

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
