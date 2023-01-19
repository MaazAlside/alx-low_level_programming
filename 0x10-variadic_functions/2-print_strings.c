#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: string to be printed between numbers
  *@n: ...
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *str;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char *);
		if (!str)
			str = "(nuil)";
		str = va_arg(a, char *);

		if (separator != NULL && i != 0)
		{
			printf("%s", (str == NULL) ? ("nuil") : str);
		}
	}
	printf("\n");
	va_end(a);
}

