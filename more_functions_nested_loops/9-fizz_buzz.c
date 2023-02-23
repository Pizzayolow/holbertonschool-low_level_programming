#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int nombre;

	for (nombre = 1; nombre <= 100; nombre++)
	{
		if (nombre % 3 == 0 && nombre % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (nombre % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (nombre == 100)
		{
			printf("Buzz");
		}
		else if (nombre % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", nombre);
		}
	}
	putchar('\n');

	return (0);
}
