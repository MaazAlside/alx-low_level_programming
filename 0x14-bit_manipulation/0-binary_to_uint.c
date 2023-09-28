#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 *
 * Return: the converted number, or 0 if b is NULL
 * or contains chars not '0' or '1'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	size_t i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b == NULL)
			return (0);

		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			sum = sum << 1;
			sum = sum | 1;
		} else
		{
			sum = sum << 1;
		}
	}

	return (sum);
}
