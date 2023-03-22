/**
 * print_name - function that prints a name.
 * @name: name to print
 * @f: pointer to function that prints a name
 */
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' || f != '\0')
		return;
	f(name);
}
