#include "lists.h"
/**
 * dlistint_len - Short description, single line
 * @h: Description of parameter x
 (*
 * Return: The total of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
