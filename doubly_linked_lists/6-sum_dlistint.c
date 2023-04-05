#include "lists.h"
/**
 * sum_dlistint - Short description, single line
 * @head: the struct
 (*
 * Return: The total of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;


	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
