#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 *
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: If one of the numbers contains non-digits - 1.
 * 	Otherwise - 0.
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int n;
	int d;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[n]);
	}

	printf("%d\n", i);

	return (0);
}
