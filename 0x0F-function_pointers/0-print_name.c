/**
 * print_name - prints a name.
 * @name: name to be printed
 * @f: pointer to function
 * Return: nothing
 */

#include <stdio.h>
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
