#include <stdio.h>
/**
 *main - entry
 *
 *Description: a program that prints _putchar
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int chr;

	for (chr = 0; chr < 8; chr++)
		_putchar(str[chr]);
	_putchar('\n');

	return (0);
}
