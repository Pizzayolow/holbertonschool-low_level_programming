#include "lists.h"
/**
 * add_node_end - print the size of a list
 * @head: string - the h
 * @str: the strings passed
 * Return: the size of the list
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode = *head;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;

	return (newnode);
}
