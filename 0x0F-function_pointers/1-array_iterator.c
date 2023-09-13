#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 *		    parameter on each element of an array.
 *
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function.
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1; //last address of the array

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
