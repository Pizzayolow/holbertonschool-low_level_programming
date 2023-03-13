#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Short description, single line
 * @s1: Description of parameter x
 * @s2: second char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int k = 0;
	int str1 = 0;
	int str2 = 0;
	char *tableau;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++, str1++)
	{
	}
	for (i = 0; s2[i] != '\0'; i++, str2++)
	{
	}
	tableau = malloc(sizeof(char) * str1 + str2);
	if (tableau == 0)
	{
		return (NULL);
	}
	for (i = 0; i < str1; i++)
	{
		tableau[i] = s1[i];
	}
	for (i = str1; i < (str1 + str2); k++, i++)
	{
		tableau[i] = s2[k];
	}
	return (tableau);
}
