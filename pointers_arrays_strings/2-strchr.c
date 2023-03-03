#include "main.h"
#include <stdio.h>
/**
 * _strchr- Writee leing to uppercase
 * @s: the string in main fonction
 * @c: the char we must found
 * Return: the string to copy
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c && c != '\0')
		{
			return (s + i);
		}
	}
	return (NULL);
}
