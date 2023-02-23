#include "main.h"
/**
 * print_square - Check if the letter is an uppercase or not
 *
 * @size: ma variable
 * Return: Return 1 if its through 0 and 9
 */
void print_square(int size)
{
	int colonne;

	int ligne;

	if (size > 0)
	{
		for (ligne = 0; ligne < size; ligne++)
		{
			for (colonne = 0; colonne < size; colonne++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
