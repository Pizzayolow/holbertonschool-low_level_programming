#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strpbrk- Writee leing to uppercase
 * @s: the string in main fonction
 * @accept: the char we must found
 * Return: the string to copy
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
