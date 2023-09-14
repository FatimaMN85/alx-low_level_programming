#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *p = "";
	int i;

	i = 0;
	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					str = "(nil)";
					printf("%s%s",p, str);
					break;
          			default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
