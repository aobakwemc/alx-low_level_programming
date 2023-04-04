#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: start of list
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sumOfData = 0;

	while (head != NULL)
	{
		sumOfData = sumOfData + head->n;
		head = head->next; /*move to next node to accumulate sum*/
	}
	return (sumOfData);
}
