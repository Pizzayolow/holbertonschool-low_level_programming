#include "lists.h"
/**
 * add_node - print the size of a list
 * @head: string - the h
 * @str: the strings passed
 * Return: the size of the list
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
