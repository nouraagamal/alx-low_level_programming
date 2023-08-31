#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -  if the input integer is a prime number
 *
 * @n: input int
 * @m: input int
 *
 * Return: 1 if prime and 0 ow
*/

int check(int n, int m);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - if can be divided by numbers
 *
 * @n: input int
 * @m: input int
 *
 * Return: int
*/

int check(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check(n, m + 1));
}
