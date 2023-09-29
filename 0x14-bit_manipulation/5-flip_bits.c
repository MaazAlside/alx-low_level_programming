#include "main.h"
#include <stdio.h>

/**
 * flip_bits - calculates the Hamming distance by counting differing bits
 * between two unsigned long integers.
 * @n: the first unsigned long integer
 * @m: the second unsigned long integer
 *
 * Return: the number of bits needed to flip in the binary representation of n
 * to transform it into m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;
	}
	return (count);

}

