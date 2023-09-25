#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: if -ve '0', not exactly 1 'ERROR'
*/

int main(int argc, char *argv[])
{
	int x, y = 0, z = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
		printf("0\n");
	while (x > 0)
	{
		if (x >= 25)
			y = 25;
		else if (x >= 10)
			y = 10;
		else if (x >= 5)
			y = 5;
		else if (x >= 2)
			y = 2;
		else
			y = 1;
		z += x / y;
		x %= y;
	}
	printf("%d\n",z);
	return (0);
}
