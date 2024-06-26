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
		else if (*s >= '0' && *s <= '9')
		{
			i = 1;
			result = result * 10 + (*s - '0');
		}
		else if (i)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
