#include "main.h"

/**
 * _isalpha - checks if alphabet or not
 *
 * @c: input integer parameter
 *
 * Return: returns (1) if a letter upper or lower
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
