#include "main.h"
int _pow_recursion(int x, int y);
/**
 * binary_to_uint - converts a binary to decimal
 * @b: the binary given
 * Return: total if ok, 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int size = strlen(b);
	unsigned int total = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; i < size; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
			total += (b[i] - '0') * _pow_recursion(2, size - i - 1);
	}
	return (total);
}
