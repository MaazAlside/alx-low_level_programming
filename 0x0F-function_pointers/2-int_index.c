#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 * @array: arraye og int values
 *@size: size of array
 *@cmp: function to pointer
 *Return: return the index of the frint element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
