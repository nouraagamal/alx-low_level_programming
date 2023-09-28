#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 *
 * @n: int to chnage in
 * @index: index to be changed to 1
 *
 * Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 || !n)
		return (-1);
	return (!!(*n |= 1 << index));
}
