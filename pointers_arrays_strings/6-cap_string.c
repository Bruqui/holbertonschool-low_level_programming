#include "main.h"

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i - 1] >= 'a' && s[i - 1] <= 'z'))
			s[i] -= 32;
	}
	return (s);
}
