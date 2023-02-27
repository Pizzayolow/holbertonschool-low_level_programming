#include "main.h"
/**
 * _puts - the function who return the lenght of a string
 * @str: the char
 * Return: the numberof charachers in this array
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
