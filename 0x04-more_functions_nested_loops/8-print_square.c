#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
*/

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar(35);
		_putchar('\n');
	}
}
