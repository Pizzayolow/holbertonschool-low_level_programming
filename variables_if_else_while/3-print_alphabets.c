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
	int t = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (t <= 'Z')
	{
		putchar(t);
		t++;
	}
		putchar ('\n');

	return (0);
}
