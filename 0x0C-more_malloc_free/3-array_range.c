#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers.
 *@min: int type
 *@max: int type
 *Return: return the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	char *array;
	int size = max - min;

	if (min > max)
		return (NULL);
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[i] = i;
	}
	return ((int *)(array));
}
