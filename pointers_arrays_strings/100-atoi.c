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
		else if (_isdigit(*s))
		{
			i = 1;
			result = result * 10 + (*s - '0');
		}
		else (i)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
