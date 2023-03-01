/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
#include"main.h"

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
