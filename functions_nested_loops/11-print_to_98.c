#include "main.h"
#include <stdio.h>
/**
 * *print_to_98 - add result
 * @n: Description of parameter a
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n > 98)
			for (n = n; n >= 98; n--)
			{
			}
		printf("%d, ", n);

	}
	printf("\n");
}
