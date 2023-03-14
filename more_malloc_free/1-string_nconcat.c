#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * string_nconcat - function
 *
 * @s1 : parameter
 * @s2 : parameter 2
 * @n : sss
 * Return: q;dfuksghlisdrkfg
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *tab = NULL;
	unsigned int compteur = 0;
	unsigned int compteur2 = 0;
	unsigned int k;

	for (i = 0; s1[i] != '\0'; i++, compteur++)
	{
	}
	for (i = 0; s2[i] != '\0'; i++, compteur2++)
	{
	}
	if (n > compteur2)
	{
		n = compteur2;
	}
	tab = malloc(sizeof(char) * (compteur + n));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < compteur; i++)
	{
		tab[i] = s1[i];
	}
	for (i = 0, k = compteur; k < compteur + n; k++, i++)
	{
		tab[k] = s2[i];
	}
	return (tab);
}
