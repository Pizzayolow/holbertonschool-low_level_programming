#include "main.h"
/**
 * _isalpha - My function for know what is in lowercase and UPPERCASE or others
 * @c: c are here for the charatcher in ASCII
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
