#include "main.h"
/**
 * is_prime_helper - est for closest int squareroot
 * @n: number being evaluated
 * @i: number being evaluated
 * Return: i if i is the root of n else -1
 */

int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - est for closest int squareroot
 * @n: number being evaluated
 * Return: i if i is the root of n else
 */
int is_prime_number(int n)
{
        return (is_prime_helper(n, 2));
}
