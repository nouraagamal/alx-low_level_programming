#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = -1;

	if (src[i] != '\0')
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	return (dest);
}
