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
	int size = 0;
	char *c;

	if (str == NULL)
		return(NULL);
	for (; str[size] != '\0'; size++);
	c = malloc(sizeof(char) * size + 1);
	if (c == 0)
		return(NULL);
	else
	{
		for (int i = 0; i < size; i++)
			c[i] = str[i];
	}
	return (c);
}
