#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *n = (char *)main;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (b--)
		printf("%02x%c", *p++, b? " " : "\n");
	return (0);
}
