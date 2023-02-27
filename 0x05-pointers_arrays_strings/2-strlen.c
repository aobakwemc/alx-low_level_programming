/**
 * _strlen -  returns the length of a string
 * @s: string interpreted as array of characters
 * Return: characters counted via @s
 */
#include "main.h"

int _strlen(char *s)
{
	int characters = 0;

	while (s[characters] != '\0') /*not equal to NULL character*/
	{
		/*remember that string = array of characters, so we count the characters*/
		characters++;
	}
	return (characters);
}
