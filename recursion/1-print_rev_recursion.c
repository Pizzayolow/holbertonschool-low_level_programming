#include "main.h"

/**
 * _print_rev_recursion - Short description, single line
 * @s: Description of parameter x
 * Return: Description of the returned value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
