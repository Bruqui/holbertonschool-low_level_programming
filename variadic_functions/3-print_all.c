#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, printed = 0;
	char *str;
	const char t_args[] = "cifs";
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j] && printed)
			{
				printf("%s", sep);
				if (format[i] == 'c')
					printf("%c", va_arg(args, int));
				else if (format[i] == 'i')
					printf("%d", va_arg(args, int));
				else if (format[i] == 'f')
					printf("%f", va_arg(args, double));
				else if (format[i] == 's')
				{
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
				}
				sep = ", ";
				printed = 1;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
