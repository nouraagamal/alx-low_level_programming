#include "main"

/**
 * print_line - print a stright line
 *
 * @n: number of times the character sould be printed
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
