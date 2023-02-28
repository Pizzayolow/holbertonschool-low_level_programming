#include "main.h"
/**
 * puts2 - the function who return the lenght of a string
 * @str: the char
 * Return: the numberof charachers in this array
 */

void puts2(char *str)
{
	int i;

	for (i= 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
		}
	}
	_putchar('\n');
}
