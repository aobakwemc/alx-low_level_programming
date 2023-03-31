#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	newElement = malloc(sizeof(list_t));

	if (!newElement)
		return (NULL);

	newElement->str = strdup(str);
	newElement->len = length;
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
