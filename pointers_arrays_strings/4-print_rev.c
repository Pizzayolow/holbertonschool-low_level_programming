#include "main.h"
/**
 * print_rev - the function who return the lenght of a string
 * @s: the char
 * Return: the numberof charachers in this array
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i; i >= 0; i--)
	{
		_putchar(s[i]);
		}
	_putchar('\n');
}
