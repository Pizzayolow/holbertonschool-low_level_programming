#include "hash_tables.h"
/**
 * key_index - Short description, single line
 * @key: Description of parameter x
 * @size: the size
 * Return: Description of the returned value
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n = 0;

	n = hash_djb2(key);
	n = n % size;

	return (n);
}
