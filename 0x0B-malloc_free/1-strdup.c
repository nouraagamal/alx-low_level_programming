#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space with the cp
 *
 * @str: the string
 *
 * Return: pointer or null if fail
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *c;

	if (str == NULL)
		return(NULL);
	for (; str[size] != '\0'; size++);
	c = malloc(sizeof(*str) * size + 1);
	if (c == 0)
		return(NULL);
	else
	{
		for (; i < size; i++)
			c[i] = str[i];
	}
	return (c);
}
