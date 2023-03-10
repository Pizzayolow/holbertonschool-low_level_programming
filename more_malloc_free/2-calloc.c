#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _calloc - function
 *
 * @nmemb : parameter
 * @size : parameter 2
 * Return: q;dfuksghlisdrkfg
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}
return (ptr);
}
