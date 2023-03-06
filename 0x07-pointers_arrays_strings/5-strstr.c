/**
 * _strstr - locates a substring
 * function finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * @haystack: string to search
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
