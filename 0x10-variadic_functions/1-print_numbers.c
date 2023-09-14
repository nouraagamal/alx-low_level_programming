#include "variadic_functions.h"

/**
* print_numbers - prints numbers
*
* @separator: pointer to the string to be printed between numbers
* @n: number of integers passed to the function
* @...: integers to print
*
* Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	if (n)
		printf("%d\n", va_arg(args, int));
	else
		printf("\n");
	va_end(args);
}
