/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * function locates the first occurrence in the string s of
 * any of the bytes in the string accept
 *
 * @s: string to searched
 * @accept: set of bytes to search for
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
#include "main.h"
#include <stdio.h>

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
