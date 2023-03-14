#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * malloc_checked - function
 * @b : parameter
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;
	ptr = malloc(sizeof(b));
	return (ptr);
}
