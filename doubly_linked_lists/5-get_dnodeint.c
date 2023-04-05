#include "lists.h"
/**
 * get_dnodeint_at_index - Short description, single line
 * @head: the struct
 * @index: the index
 (*
 * Return: The total of the nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	i++;
	}
	return (0);
}
