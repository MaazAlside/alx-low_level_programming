#include <stdio.h>
#include "main.h"

/**
* set_bit - sets the value of a bit at a given index to 1
* @n: the number
* @index: the index of the bit to set
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)

	{
		*n |= (1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}

