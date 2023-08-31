#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 *
 * @n: input int
 * @m: square root
 * Return: int
*/

int squrt(int n, int m);
int _sqrt_recursion(int n)
{
	return (squrt(n, 1));
}

/**
 * squrt - finds sqrt
 *
 * @n: input int
 * @m: square root
 *
 * Return: int
*/

int squrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (squrt(n, m + 1));
	else
		return (-1);
}
