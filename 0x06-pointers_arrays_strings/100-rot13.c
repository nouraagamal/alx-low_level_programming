#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 *
 * @s: input char
 *
 * Return: the encoded string
*/

char *rot13(char *s)
{
	int i;
	char *p = s;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == a[i])
			{
				*s = b[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
