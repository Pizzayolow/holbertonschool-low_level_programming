#include "main.h"
/**
 * _isalpha - My function for know what is in lowercase and UPPERCASE or others
 * @c: c are here for the charatcher in ASCII
 *
 * Return: Return 1 if is an lowercase or UPPERCASE, return 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
