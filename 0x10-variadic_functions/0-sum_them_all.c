#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: const unsigned int
 *
 *Return: returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int sum = 0;

	if (n)
	{
		va_start(a, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(a, int);
		}
		va_end(a);
	}
	return (sum);
}
