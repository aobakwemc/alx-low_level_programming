#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to start of list.
 * Return: address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *screw, *hammer;

	screw = hammer = head;
	while (screw && hammer && hammer->next)
	{
		screw = screw->next;
		hammer = hammer->next->next;
		if (screw == hammer)
		{
			screw = head;
			break;
		}
	}
	if (!screw || !hammer || !hammer->next)
		return (NULL);
	while (screw != hammer)
	{
		screw = screw->next;
		hammer = hammer->next;
	}
	return (hammer);
}
