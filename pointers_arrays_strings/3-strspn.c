#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strspn- Writee leing to uppercase
 * @s: the string in main fonction
 * @accept: the char we must found
 * Return: the string to copy
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int k;
	int match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				match++;
				break;
			}
		}
		if (accept[k] == '\0')
		{
			break;
		}
	}
	return (match);
}
