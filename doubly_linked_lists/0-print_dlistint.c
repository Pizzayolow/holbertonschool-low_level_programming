#include "lists.h"
/**
 * print_dlistint - Short description, single line
 * @h: Description of parameter x
 (*
 * Return: The total of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		int k = h->n;

		printf("%d\n", k);
		i++;
		h = h->next;
	}
	return (i);
}
