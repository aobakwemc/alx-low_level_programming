/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return:  number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, bytes, count;

	bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				bytes++;
				count = 1;
			}
		}
		if (count == 0)
			return (bytes);
		}

	return (bytes);
}
