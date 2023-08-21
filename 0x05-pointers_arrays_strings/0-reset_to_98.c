#include "main.h"
#include <stdio.h>

/**
 * main - take the pointer and update the value it points to.
 *
 * @n: int parameter.
 *
 * Return: nothing.
 */
int main(void)
{
	int n;

	n = 402;
	int *ptr = &n;
	*ptr = 98;
}
