/**
 * _strlen - the function who return the lenght of a string
 * @c: the char
 */

int _strlen(char *s)
{
	int i= 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return(i);
}
