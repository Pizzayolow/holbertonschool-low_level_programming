#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Write a function that changes all lowercase letters of a string to uppercase.
 */

char *string_toupper(char *tableau)
{
	int s = 0;

	while (tableau[s] != '\0')
	{
		if (tableau[s] > 'a' && tableau[s] < 'z')
		{
			tableau[s] = tableau[s] - ('a' - 'A');
		}
		s++;
	}
	return (tableau);
}
