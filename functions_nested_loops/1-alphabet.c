#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print_alphabet_with__putchar
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	putchar ('\n');
}
