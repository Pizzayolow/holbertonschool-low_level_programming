#include "main.h"
/**
 * _isupper - Check if the letter is an uppercase or not
 * @c: The letter
*
 * Return: Return 1 if is am uppercase, 0 if not
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);

}
