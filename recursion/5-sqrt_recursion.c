#include "main.h"

/**
 * _sqrt_recursion - Short description, single line
 * @n: Description of parameter x
 * Return: Description of the returned value
 */

int _sqrt_recursion(int n)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
