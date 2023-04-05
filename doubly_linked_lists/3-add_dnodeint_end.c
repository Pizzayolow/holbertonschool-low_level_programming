#include "lists.h"
/**
 * add_dnodeint_end - Short description, single line
 * @n: The number given by the main
 * @head: the struct
 (*
 * Return: The total of the nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	new_node->prev = last_node;
	last_node->next = new_node;
	return (new_node);
}
