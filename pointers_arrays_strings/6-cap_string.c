#include "main.h"
#include <stdio.h>
/**
 * cap_string- Writee leing to uppercase
 * @str: the string in main fonction
 * Return: the string to copy
 */

char *cap_string(char *str)
{
	int i = 0;
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', 32, 9, '\n'};
	int k;

	while (str[i] != '\0')
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (str[i] == 0)
			{
				str[i] = str[i] - ('a' - 'A');
			}
			if (s[k] == str[i - 1] && (str[i] > 96 && str[i] < 123))
			{
			str[i] = str[i] - ('a' - 'A');
			}
		}
		i++;
	}

	return (str);
}
