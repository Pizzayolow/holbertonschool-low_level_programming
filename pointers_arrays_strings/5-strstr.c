#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strstr- Writee leing to uppercase
 * @haystack: the string in main fonction
 * @needle: the char we must found
 * Return: the string to copy
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
