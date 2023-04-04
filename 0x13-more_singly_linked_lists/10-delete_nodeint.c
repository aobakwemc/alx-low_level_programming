#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 * given index of a linked list.
 * @head: dbl pointer to start of list
 * @index: iterator and index of list elements
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int getNode;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (getNode = 0; getNode < (index - 1); getNode++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
