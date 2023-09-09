#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the newly-allocated space in memory
 * ow null
*/

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[size1] != '\0'; size1++)
	;
	for (; s2[size2] != '\0'; size2++)
	;
	c = malloc(sizeof(char) * (size1 + size2) + 1);
	if (c == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i <= (size1 + size2); i++)
		{
			if (i < size1)
				c[i] = s1[i];
			else
				c[i] = s2[i - size1];
	}
	c[i] = '\0';
	return (c);
}
