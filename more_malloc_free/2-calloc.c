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

	ptr = malloc(size * nmemb);

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= nmemb; i++)
	{
		ptr[i] = 0;
	}
return (ptr);
}
