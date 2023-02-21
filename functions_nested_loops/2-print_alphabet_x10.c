#include "main.h"
/**
 * print_alphabet - print_alphabet_with__putchar_x10
 */
void print_alphabet_x10(void)
{
	int n = 'a';
	int i;
	
	for (i = 0; i < 10; i++)
	{		
		for (n = 'a'; n < 'z'; n++)
		{
			_putchar(n);
		}
		_putchar ('\n');
	}
}
