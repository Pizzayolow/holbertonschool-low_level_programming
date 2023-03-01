#include "main.h"
/**
 * _strcmp - the function who return the lenght of a string
 * @s1: the destination to copy
 * @s2: the source
 * Return: the string to copy
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
