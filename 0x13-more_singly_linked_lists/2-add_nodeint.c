#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: dbl pointer to new head of list
 * @n: data value at new node
 * Return: address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newElement;

	newElement = malloc(sizeof(listint_t));

	if (newElement == NULL)
		return (NULL);
	newElement->n = n;
	newElement->next = (*head);
	(*head) = newElement;

	return (newElement);
}
