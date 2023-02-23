#include "main.h"
/**
 * print_diagonal - Check if the letter is an uppercase or not
 *
 * @n: ma variable
 * Return: Return 1 if its through 0 and 9
 */
void print_diagonal(int n)
{
	int i;

	int a;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');

			for (a = 0; a <= i; a++)
			{
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
