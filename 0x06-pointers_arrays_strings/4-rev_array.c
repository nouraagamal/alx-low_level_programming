#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: input integer
 * @n: input integer
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
	for (int i = 0; i < n + 1; i++)
		printf("%d, ", a[i]);
}
