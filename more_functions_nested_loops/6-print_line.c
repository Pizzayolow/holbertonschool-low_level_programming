#include "main.h"
/**
 * print_line - Check if the letter is an uppercase or not
 *
 * @n: ma variable
 * Return: Return 1 if its through 0 and 9
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
		else
		{
			_putchar('\n');
		}
}
