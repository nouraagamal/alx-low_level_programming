#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: string that will be returned
 *
 * Return: str
*/

char *cap_string(char *str)
{
	int c;
	int a;
	char *b;

	b = " \t\n,.!?\"()[]";

	for (c = 0; str[c] != '\0'; c++)
	{
		if (!c)
		{
			if (str[c] >= 'a' && str[c] <= 'z')
				str[c] = str[c] - 32;
		}
		else
		{
			for (a = 0; c[a] != '\0'; a++)
				if (str[c - 1] == b[a] && str[c] >= 'a' && str[c] <= 'z')
					str[c] = str[c] - 32;
		}
	}
	return (str);
}
