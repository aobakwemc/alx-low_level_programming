/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: string taken as argument
 * Return: NULL if str = NULL or insufficient memory
 * If success, a pointer to the duplicated string.
 */
#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int i, x = 0;
	char *ptr;

	if (str == NULL)
		return (NULL); /*If no argument is given*/
	for (i = 0; str[i]; i++)
	{
		x++; /*i takes on accumulation of str length*/
	}

	ptr = malloc(sizeof(char) * x);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i]; /*ptr copies str into itself*/

	return (ptr);
}
