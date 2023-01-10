#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *@size: unsigned integer
 *@c: character
 *Return: return (NULL) or pointer to the array
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
