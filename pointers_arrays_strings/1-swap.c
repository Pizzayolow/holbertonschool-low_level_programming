/**
 * swap_int - Swap 2 values
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
