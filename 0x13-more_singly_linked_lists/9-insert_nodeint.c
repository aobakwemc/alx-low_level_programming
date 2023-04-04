#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: dbl pointer to start of list
 * @idx: iterator and index of list where new node is inserted
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *currentNode, *newNode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		currentNode = *head;
		for (node = 0; node < idx - 1 && currentNode != NULL; node++)
			currentNode = currentNode->next;
		if (currentNode == NULL)
			return (NULL);
	}
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
