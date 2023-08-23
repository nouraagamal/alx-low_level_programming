#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 *
 * @str: string that will be returned
 *
 * Return: str
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
