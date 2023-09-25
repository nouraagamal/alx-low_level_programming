#include "main.h"

/**
 * argstostr - concatenates all arguments
 *
 * @ac: int
 * @av: int
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int l, i, j, k;
	char *v;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, l++)
		for (j = 0; av[i][j]; l++)
			j++;
	v = (char *)malloc(sizeof(char) * l + 1);
	if (v == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++)
		{
			v[k] = av[i][j];
			k++;
		}
		v[k] = '\n';
	}
	v[k] = '\0';
	return (v);
}
