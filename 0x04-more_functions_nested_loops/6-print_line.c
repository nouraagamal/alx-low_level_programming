#include "main"

/**
 * print_line - prints a straight line
 *
 * @n: is the number of times the _ character
 *	sould be printed
*/

void print_line(int n)
{
	int lc;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lc = 1; lc <= n; lc++)
			_putchar('_');
		_putchar('\n');
	}
}
