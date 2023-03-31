#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to node.
 * Return: num of elements in a node.
 */
size_t list_len(const list_t *h)
{
	size_t elementCounter = 0;

	while (h)
	{
		elementCounter++;
		h = h->next;
	}
	return (elementCounter);
}
