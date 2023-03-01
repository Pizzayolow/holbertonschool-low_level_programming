#include "main.h"
#include <stdio.h>
/**
 * *_strncat - the function who return the lenght of a string
 * @dest: the destination to copy
 * @src: the source
 * @n: variable
 * Return: the string to copy
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int j = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	for (; j < n && src[j] != '\0'; j++)
	{
		dest[destlen] = src[j];
		destlen++;
	}

	return (dest);
}
