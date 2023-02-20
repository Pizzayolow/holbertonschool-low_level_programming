#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *//* more headers goes there */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
			n++;
		}
		else
		{
			n++;
		}
	}
	putchar ('\n');


	return (0);
}
