#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: An array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function
 *
 * Return: index of the integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
			return (i);
			i++;
		}
	return (-1);
}
