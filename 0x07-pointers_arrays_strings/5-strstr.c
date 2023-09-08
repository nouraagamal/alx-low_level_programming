#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, k = 0;

	while (haystack[i])
	{
		while (needle[k] && (haystack[i] == needle[0]))
		{
			if (haystack[i + k] == needle[k])
				k++;
			else
				break;
		}
		if (needle[k])
		{
			i++;
			k = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
