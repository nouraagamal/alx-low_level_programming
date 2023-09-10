#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers, ordered ascendingly
*
* @min: min value
* @max: max value
*
* Return: pointer to the newly created array
* NULL if min>max or fails
*/

int *array_range(int min, int max)
{
	char *c;
	int size, i;

	size = (max - min) + 1;
	c = malloc(sizeof (int) * size);
	if (ptr == NULL || min > max)
		return ('\0');
	for (i = 0; i < size; i++)
		c[i] = min + i;
	return (c);
}
