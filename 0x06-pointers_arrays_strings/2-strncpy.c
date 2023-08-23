#include "main.h"

/**
 * *_strncat - a function that copies a string
 *
 * @dest: input char
 * @src: input char
 * @n: input integer
 *
 * Return: a pointer to 'dest'
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return ('dest');
}
