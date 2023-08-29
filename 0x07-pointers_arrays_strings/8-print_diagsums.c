#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: array of integer
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int i, j, k;

	j = 0;
	k = 0;
	for (i = 0; i < size; i++)
	{
		j = j + a[i];
		k = k + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", j);
	printf("%d\n", k);
}
