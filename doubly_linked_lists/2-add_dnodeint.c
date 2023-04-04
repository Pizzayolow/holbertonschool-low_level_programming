#include "lists.h"
/**
 * add_dnodeint - Short description, single line
 * @n: The number given by the main
 * @head: the struct
 (*
 * Return: The total of the nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	return (*head);
}
