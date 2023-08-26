#include "main.h"

/**
 * print_last_digit.c - last didit of nomber
 *
 * @n: input number
 *
 * Return: last digit in the number
*/

int print_last_digit(int a)
{
	int i;

	if (n < 0)
		i = (n % 10) * (-1);
	else
		i = (n % 10);
	_putchar(i + '0');
	return (i);
}	
