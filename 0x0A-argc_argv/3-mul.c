#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - print the result of the multiplication,
 *
 * @argc: int
 * @argv: array of char
 *
 * Return: success (0) else fail
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
