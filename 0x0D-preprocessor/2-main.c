#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the file of the program
 *	  was compiled from, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s", __FILE__);
	printf("\n");
	return (0);
}
