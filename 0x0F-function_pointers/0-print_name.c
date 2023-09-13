#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: The name to be printed
 * @f: A pointer to the function
 *
 * Return: nithing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
