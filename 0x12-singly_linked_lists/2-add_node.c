#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to be duplicated
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;
	unsigned int length = 0;

	while (str[length])
		length++;

	newElement = malloc(sizeof(list_t));
	if (!newElement)
		return (NULL);

	newElement->str = strdup(str);
	newElement->len = length;
	newElement->next = (*head);
	(*head) = newElement;

	return (*head);
}
