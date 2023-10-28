#include "main.h"

/**
 * _memcpy - a function to copy array to another one
 * of bigger size
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
