#include "lists.h"
/**
 * free_dlistint - Short description, single line
 * @head: the struct
 (*
 * Return: The total of the nodes
 */
void free_dlistint(dlistint_t *head)

{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_dlistint(head->next);
	}

	free(head);

}
