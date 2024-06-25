#include "main.h"

void rev_string(char *s)
{
	int i, j, k;
	char tmp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;
	for (k = 0; k < i / 2; k++)
	{
		tmp = s[j];
		s[j] = s[k];
		s[k--] = tmp;
	}
}
