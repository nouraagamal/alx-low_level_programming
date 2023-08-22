#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: input integer parameter
 *
 * Return: returns (1) and prints + if n>0
 * (0) and prints 0 if n=0
 * (-1) and prints - if n<0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		return (-1);
		printf("-");
	}
}
