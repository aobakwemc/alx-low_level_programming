/**
 *_isupper - checks for uppercase character.
 *@c: accepts char argument
 *Return: 1 if uppercase, 0 if otherwise.
 */
#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
