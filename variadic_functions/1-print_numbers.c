#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Short description, single line
 * @separator: Description of parameter x
 * @n: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(count);
	unsigned int i = 0;

	va_start(count, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(count, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(count);
}
