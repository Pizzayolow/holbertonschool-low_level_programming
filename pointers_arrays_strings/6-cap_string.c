#include "main.h"
#include <stdio.h>
/**
 * cap_string- Writee leing to uppercase
 * @s: the string in main fonction
 * Return: the string to copy
 */

char *cap_string(char *str)
{
	int i = 0;
	char separator [] = {',',';','.','!','?','"','(',')','{','}',32,'\n',9};
	int k;

	while (str[i] != '\0')
	{
		for (k = 0; separator[k] != '\0'; k++)
		{
			if (separator[k - 1] == str[i - 1] && str[i] > 96 && str[i] < 123)
			{
			str[i] = str[i] - ('a' - 'A');
			}
		}
		i++;
	}

	return (str);
}
