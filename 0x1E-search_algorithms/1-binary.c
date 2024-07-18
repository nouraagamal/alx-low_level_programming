#include "search_algos.h"


/**
 * binary_search - searches for a value in an array using Linear search.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: the first index where value is located, or -1 if not found.
 **/

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = 0, mid = 0, i;

	if (array == NULL)
		return (-1);
	else
	{
		for (start = 0, end = size - 1; end >= start;)
		{
			printf("Searching in array: ");
			for (i = start; i < end; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);
			mid = (start + end) / 2;
			if (value == array[mid])
				return (mid);
			else if (value > array[mid])
				start = mid + 1;
			else
				end = mid - 1;
		}
		return (-1);
	}
}

