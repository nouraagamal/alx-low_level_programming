#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int x, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (s = 1; s <= x; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
