#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: is the number of times the _ character
 *	should be printed
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int lnChr;

		for (lnChr = 1; lnChr <= n; lnChr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
