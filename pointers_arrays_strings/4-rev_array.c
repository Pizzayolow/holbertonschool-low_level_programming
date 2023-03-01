#include "main.h"
/**
 * reverse_array - the function who return the lenght of a string
 * @a: sss
 * @n: the number of elements of my array
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

