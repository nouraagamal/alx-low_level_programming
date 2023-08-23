#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * using at most n bytes from src
 * if containing n or more it doen't ber null terminated
 *
 * @dest: input char
 * @src: input char
 * @n: input integer
 *
 * Return: a pointer to 'dest'
*/

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	while (dest[l])
		l++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';
	return ('dest');
}
