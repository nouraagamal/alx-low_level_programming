#include "main.h"

/**
 * *_strncpy - a function that copies a string
 *
 * @dest: input char
 * @src: input char
 * @n: input integer
 *
 * Return: a pointer to 'dest'
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
