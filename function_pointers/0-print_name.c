#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Short description, single line
 * @name: Description of parameter x
 * @f: s
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
