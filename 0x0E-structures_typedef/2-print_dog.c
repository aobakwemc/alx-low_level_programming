/**
 * print_dog -  function that prints a struct dog
 * @d: struct of dog to be printed.
 * Return: void
 */
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age < 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");

}
