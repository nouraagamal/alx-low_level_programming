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
	int c = 0;

	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		c++;
		else if (str[c] = " \t\n,.!?\"()[]")
			return (str[c]);
	}
}
