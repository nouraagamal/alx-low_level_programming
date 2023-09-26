#include "main.h"
#include <stdlib.h>

int wordlength(char *str);
int countwords(char *str);
char **strtow(char *str);

/**
 * **strtow - splits a string to words
 *
 * @str: str
 *
 * Return: pointer to array of strings if fails - NULL
 */
char **strtow(char *str)
{
	char **string;
	int nwords, i = 0, j, nletters, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	nwords = countwords(str);
	if (nwords == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (nwords + 1));
	if (string == NULL)
		return (NULL);
	for (j = 0; j < nwords; j++)
	{
		while (str[i] == ' ')
			i++;
		nletters = wordlength(str + i);
		string[j] = malloc(sizeof(char) * (nletters + 1));
		if (string[j] == NULL)
		{
			for (; j >= 0; j--)
				free(string[j]);
			free(string);
			return (NULL);
		}
		for (len = 0; len < nletters; len++)
			string[j][len] = str[i++];
		string[j][len] = '\0';
	}
	string[j] = NULL;
	return (string);
}

/**
 * countwords - Counts the number of words contained within a string.
 *
 * @str: string to be searched.
 *
 * Return: number of words in str.
 */

int countwords(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += wordlength(str + i);
		}
	}
	return (words);
}

/**
 * wordlength - Locates the index marking the end of the initial word
 *
 * @str: string to be searched.
 *
 * Return: index marking end of initial word pointed by str.
 */
int wordlength(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
