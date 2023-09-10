#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
*
* @s1: first string
* @s2: second string
* @n: the number of bytes to include of @s2
*
* Return: pointer to newly allocated space in memory
* NULL if fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int i = 0, j = 0, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	;
	for (size2 = 0; s2[size2] != '\0'; size2++)
	;
	c = malloc(size1 + n + 1);
	if (c == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		c[i] = s2[j];
		i++;
	}
	c[i] = '\0';
	return (c);
}
