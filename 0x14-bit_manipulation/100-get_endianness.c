#include "main.h"

/**
 * get_endianness - function checking the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *a;
	int b = 1;

	a = (char *)&b;

	return (*a);
}
