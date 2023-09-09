#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *		integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *	   Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	c = malloc(sizeof(*c) * height);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		c[i] = malloc(sizeof(**c) * width);
		if (c[i] == NULL)
		{
			for (; i >= 0; i--)
				free(c[i]);
			free(c);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			c[i][j] = 0;
	}
	return (c);
}
