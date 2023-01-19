#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 *@n: ...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int num;

	if (n)
	{
		va_start(a, n);
		for (i = 0; i < n; i++)
		{
			num = va_arg(a, int);
			printf("%d", num);
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(a);
	}
}
