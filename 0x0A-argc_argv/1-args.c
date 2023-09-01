#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: int
 * @argv: int
 *
 * Return: success (0) else fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
