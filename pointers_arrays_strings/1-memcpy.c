#include "main.h"
#include <stdio.h>
/**
 * _memcopy- Writee leing to uppercase
 * @s: the string in main fonction
 * @b: second parameter
 * @n: the third parameter
 * Return: the string to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
