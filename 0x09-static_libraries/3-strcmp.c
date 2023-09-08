#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int f = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if ((*s1 == '\0' && *s2 != '\0')
			|| (*s1 != '\0' && *s2 == '\0') || (*s1 != *s2))
		{
			f = 1;
		}
	}
	if (f == 0)
		return (1);
	else
		return (0);
}
