#include "main.h"

/**
 * _islower - checks if alphabet is in lowercase
 *
 * @c: input integer parameter
 *
 * Return: returns (1) if lowercase and (0) otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
