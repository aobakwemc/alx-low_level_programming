#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: start of list
 * @index: iterator of list elements
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int getNode;

	if (head == NULL)
		return (NULL);

	for (getNode = 0; getNode < index; getNode++)
	{
		head = head->next; /*move to next node so it can be returned*/

		if (head == NULL)
			return (NULL);
	}
	return (head);
}
