#include <unistd.h>

/**
 * _putchar - writs the char
 *
 * @c: char to print
 *
 * Return: 1 on success
 * on error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
