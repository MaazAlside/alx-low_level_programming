#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit to get
 *
 * Return: value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

unsigned long int mask = 1UL << index;
int value = (n & mask) ? 1 : 0;

return (value);
}

