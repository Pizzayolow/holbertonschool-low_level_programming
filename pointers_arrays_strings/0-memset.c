#include "main.h"
#include <stdio.h>
/**
 * _memset- Writee leing to uppercase
 * @s: the string in main fonction
 * @b: second parameter
 * @n: the third parameter
 * Return: the string to copy
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
