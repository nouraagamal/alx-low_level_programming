#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
*
* @b: size of memory to be allocated
*
* Return: pointer to the allocated memory (success)
* 98 (fail)
*/

void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == 0)
		exit(98);
	return (c);
}
