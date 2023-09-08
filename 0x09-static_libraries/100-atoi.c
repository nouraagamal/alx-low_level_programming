#include "main.h"

int _atoi(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i] != '\0') {
		n = (s[i] - '0') + n * 10;
		i++;
	}
	return (n);
}
