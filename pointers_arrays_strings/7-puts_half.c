#include "main.h"
/**
 * puts_half - the function who return the lenght of a string
 * @str: the char
 * Return: the numberof charachers in this array
 */

void puts_half(char *str)
{
	int i = 0;
	int half;

	while (str[i] != '\0')
	{
		i++;
	}

	half = i / 2;

	if (half % 2 == 0)
	{
		half = i / 2;
	}
	else
	{
		half = (i + 1) / 2;
	}

	while (half < i)
	{
		_putchar(str[half]);
		half++;
	}


	_putchar('\n');
}
