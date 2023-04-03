#include "lists.h"
/**
 * free_list - print the size of a list
 * @head: string - the h
 *
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
		}
			free(head->str);
			free(head);
	}
}
