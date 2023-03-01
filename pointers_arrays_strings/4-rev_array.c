#include "main.h"
/**
 * rev_string - the function who return the lenght of a string
 * @s: the char
 * Return: the numberof charachers in this array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}

}

