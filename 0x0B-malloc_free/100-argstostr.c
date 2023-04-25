#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate total length of arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++; /* for the new line character */
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	/* copy each argument into the string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n'; /* add new line character */
	}
	str[k] = '\0'; /* add terminating null character */
	return (str);
}
