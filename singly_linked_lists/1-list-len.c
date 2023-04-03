#include "lists.h"
/**
 * list_len - print the size of a list
 * @h: string - the h
 * Return: the size of the list
 *
 */
size_t list_len(const list_t *h)
{
	int i = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
		}
		else
		{
			h = h->next;
		}
		i++;
	}
	return (i);
}
