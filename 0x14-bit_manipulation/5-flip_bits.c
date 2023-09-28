#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 *
 * @n: first nomber
 * @m: second nomber
 *
 * Return: nflips to flip to convert nombers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flips = 0;
	unsigned long int l = sizeof(unsigned long int) * 8;

	for (i = 0; i < l; i++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
