#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to node being printed.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t = elementCounter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;

		elementCounter++;
	}
	return (elementCounter);

}
