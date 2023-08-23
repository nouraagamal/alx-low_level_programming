#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest: input char
 * @src: input char
 *
 * Return: returns a pointer to 'dest'
*/

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i;

	while (dest[l])
		l++;
	for (i = 0; src[i]; i++)
	{
		dest[l] = src[i];
		l++
	}
	return (dest);

}
