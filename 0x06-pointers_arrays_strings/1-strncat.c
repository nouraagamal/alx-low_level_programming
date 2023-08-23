#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * using at most n bytes from src
 * if containing n or more it doen't ber null terminated
 *
 * @dest: input char
 * @src: input char
 * @n: input integer
 *
 * Return: a pointer to 'dest'
*/

char *_strncat(char *dest, char *src, int n)
{
	if (src <= n)
	{


	printf("%p", *dest + *src);
}
