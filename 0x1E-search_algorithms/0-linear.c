#include "search_algos.h"


/**
 * linear_search - searches for a value in an array using Linear search.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: the first index where value is located, or -1 if not found.
 **/

int linear_search(int *array, size_t size, int value)
{
	long unsigned int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
			return (-1);
	}
}
