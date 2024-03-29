#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Short description, single line
 * @separator: Description of parameter x
 * @n: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(count);
	unsigned int i = 0;

	va_start(count, n);
	for (i = 0; i < n; i++)
	{
		char *arg = va_arg(count, char*);

		if (arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(count);
}
