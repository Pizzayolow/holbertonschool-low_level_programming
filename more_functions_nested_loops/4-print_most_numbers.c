#include "main.h"
/**
 * print_most_numbers - Check if the letter is an uppercase or not
*
 * Return: Return 1 if its through 0 and 9
 */
void print_most_numbers(void)
{
int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
