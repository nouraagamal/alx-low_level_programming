#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	while (dest[l])
		l++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';
	return (dest);
}
