#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point
*
* @argc: length of command line arguments
*
* @argv: double pointer to cli arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	fn = get_op_func(argv[2]);

	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fn(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
