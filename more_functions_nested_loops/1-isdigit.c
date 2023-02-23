#include "main.h"
/**
 * _isdigit - Check if the letter is an uppercase or not
 * @c: The letter
*
 * Return: Return 1 if its through 0 and 9
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);

}
