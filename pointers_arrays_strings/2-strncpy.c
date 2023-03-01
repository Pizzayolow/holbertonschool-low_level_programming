#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - the function who return the lenght of a string
 * @dest: the destination to copy
 * @src: the source
 * @n: variable
 * Return: the string to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
	dest[j] = '\0';
	}

	return (dest);
}
