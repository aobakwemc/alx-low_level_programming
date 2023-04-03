#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: start of linked list
 * @n: new node added to end of list
 * Return: address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newElement;
	listint_t *temp = *head;

	newElement = malloc(sizeof(listint_t));

	if  (newElement == NULL)
		return (NULL);
	newElement->n = n;
	newElement->next = NULL;

	if (*head == NULL)
	{
		*head = newElement;
		return (newElement);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = newElement;
	return (newElement);
}
