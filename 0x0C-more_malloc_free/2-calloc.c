#include <stdlib.h>

/**
* _calloc - allocates memory for an array
*
* @nmemb: number of elements of the array
* @size: size of each element of the array
*
* Return: pointer to the allocated memory
* NULL if @nmemb or @size is 0 or fail
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return ('\0');
	c = malloc(nmemb * size);
	if (c == NULL)
		return ('\0');
	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;
	return (c);
}
