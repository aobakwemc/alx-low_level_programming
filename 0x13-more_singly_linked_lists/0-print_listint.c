#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: node
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		numOfNodes++;
	}
	return	(numOfNodes);
}
