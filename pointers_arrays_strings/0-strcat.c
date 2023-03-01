#include "main.h"
#include <stdio.h>
/**
 * *_strcat - the function who return the lenght of a string
 * @dest: the destination to copy
 * @src: the source
 * Return: the string to copy
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	 dest[i + 1]  = '\0';

	return (dest);
}
