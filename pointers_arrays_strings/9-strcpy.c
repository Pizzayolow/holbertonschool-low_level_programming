#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - the function who return the lenght of a string
 * @dest: the destination to copy
 * @src: the source
 * Return: the string to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
