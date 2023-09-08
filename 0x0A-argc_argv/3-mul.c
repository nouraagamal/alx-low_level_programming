#include "main.h"
#include <stdlib.h>
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
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
