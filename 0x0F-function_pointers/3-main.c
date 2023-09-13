#include "3-calc.h"

/**
* main - Entry point
*
* @argc: length of command line arguments
*
* @argv: pointer
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
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argv[2][1])
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
	printf("%d\n",fn(a, b));
	return (0);
}
