/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 * Return: length of string
 */
#include "main.h"

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len +  _strlen_recursion(s + 1);
	}

	return (len);
}
