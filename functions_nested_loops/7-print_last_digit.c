#include "main.h"
/**
 * print_last_digit - My function calculate the absolute of a number
 * @i: i initialize the variable(number)
 *
 * Return: Return 0 if not
 */
int print_last_digit(int i)
{
	i = i % 10;
	_putchar(i + 48);
	return (i);
}
