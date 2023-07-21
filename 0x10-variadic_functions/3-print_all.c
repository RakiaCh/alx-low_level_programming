#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of data type to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *sep = "";
	va_list valist;

	va_start(valist, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(valist, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(valist, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(valist, double));
					break;
				case 's':
					str = va_arg(valist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(valist);
}
