#include "main.h"

/**
 * *leet - encode string to 1337
 *
 * @s: input string
 *
 * Return: the encoded string
*/

char *leet(char *s)
{
	char *p = s;
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	int b[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < (sizeof(a) / sizeof(char)); i++)
		{
			if ((*s == a[i]) || (*s == a[i] + 32))
				*s = 48 + b[i];
		}
		s++;
	}
	return (p);
}
