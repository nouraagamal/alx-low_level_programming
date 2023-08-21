#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: char parameter
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*Fing string lrngth only*/
	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*1 bec the array starts from 0*/
		s[l - 1 - i] = temp;
	}
}
