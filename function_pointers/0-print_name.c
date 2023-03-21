#include <stdio.h>
#include "function_pointers"

/**
 * print_name - Short description, single line
 * @name: Description of parameter x
 * @f: s
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
