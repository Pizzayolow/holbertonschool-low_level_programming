#include "main.h"
/**
 * print_sign - My function show if a number are positive, negative or ZERO
 * @n: c initialize the variable
 *
 * Return: Return 1 if is an lowercase or UPPERCASE, return 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		n = 1;
	}
		else if (n == 0)
		{
			_putchar('0');
			n = 0;
		}
			else if (n < 0)
			{
				_putchar('-');
				n = -1;
			}
	return (n);
}
