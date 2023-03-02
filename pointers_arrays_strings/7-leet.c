#include "main.h"
#include <stdio.h>
/**
 * leet- Writee leing to uppercase
 * @str: the string in main fonction
 * Return: the string to copy
 */

char *leet(char *str)
{
	int i;
	int k;
	char mintab[] = {'a', 'e', 'o', 't', 'l'};
	char majtab[] = {'A', 'E', 'O', 'T', 'L'};
	char numtab[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 5; k++)
		{
			if (str[i] == mintab[k] ||  str[i] == majtab[k])
			{
				str[i] = numtab[k];
			}
		}
	}
	return (str);
}
