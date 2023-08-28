#include <main.h>

/**
 * *_memcpy - copies memory area.
 *
 * @dest: the memory area
 * @src: memory area to take from
 * @n: nomber of bytes to copy
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
