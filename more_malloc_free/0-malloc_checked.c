#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * malloc_checked - function
 *
 * @b : parameter
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = malloc(b);
	if (b == 0)
	{
		exit (98);
	}
	return (ptr);
}
