#include "main.h"

int _atoi(char *s)
{
	int result;
	int sign;
	int i;

	i = 0;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (isdigit(*s))
		{
			i = 1;
			result = result * 10 + (*str - '0');
		}
		else (i)
			break;
		s++;
	}
	return (sign * result);
}
