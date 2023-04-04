#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node’s data (n).
 * @head: start of list thorugh dbl pointer
 * Return: 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *startNode;
	int data;

	if (*head == NULL)
		return (0);

	startNode = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(startNode);

	return (data);
}
