#include "main.h"
/**
 * print_triangle - Check if the letter is an uppercase or not
 *
 * @size: ma variable
 * Return: Return 1 if its through 0 and 9
 */
void print_triangle(int size)
{
	int ligne;
	int colonne;
	int diez;

	if (size > 0)
	{
		for (ligne = 1; ligne <= size; ligne++)
		{
			for (colonne = ligne; colonne < size; colonne++)
			{
				_putchar(' ');
			}
			for (diez = 1; diez <= ligne; diez++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
