#include "main.h"
/**
 * _islower - My function for know what is in lowercase or UPPERCASE
 * @c: c are here for the charatcher in ASCII
 *
 * Return: Return 1 if is an lowercase, return 1 if is an UPPERCASE
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
