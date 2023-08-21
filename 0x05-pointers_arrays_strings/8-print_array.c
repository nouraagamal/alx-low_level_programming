#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line separated by comma, followed by a space
 *
 * @n: nomber of elements input
 * @a: string parameter input
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
