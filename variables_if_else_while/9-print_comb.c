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
	int n = 48;

	while (n <= 57)
	{
	putchar(n);
		if (n < 57)
		{
		n++;
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar('\n');
		n++;
		}
	}

	return (0);
}
