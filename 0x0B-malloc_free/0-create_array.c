#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars
 *
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: NULL if size = 0 or fails
 * ow a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size)
	{
		i[size] = c;
		size --;
	}
	return (i);
}
