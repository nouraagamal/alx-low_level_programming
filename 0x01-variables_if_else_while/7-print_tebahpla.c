#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	return (0);
}
