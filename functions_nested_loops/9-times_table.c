#include "main.h"
/**
 * *times_table - print a calculate table
 *
 ** Return: Always 0.
 */
void times_table(void)
{
	int i;

	for (i = 1; i < 10; i++)
	{
		int j;

		for (j = 1; j < 10; j++)
		{
			int product = i * j;

			int ones_digit = product % 10;

			int tens_digit = product / 10;

			if (tens_digit == 0)
			{
				_putchar(' ');
				_putchar(ones_digit + '0');
			}
			else if (tens_digit != 0)
			{
				_putchar(tens_digit + '0');
				_putchar(ones_digit + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
