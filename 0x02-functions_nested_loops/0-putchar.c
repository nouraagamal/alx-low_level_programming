#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * description: prints a string ehich is "_putchar"
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char s[] = "_putchar";
	int character;

	for (character = 0; character < 8; character++)
		_putchar(s[character]);
	_putchar('\n');

	return (0);
}
