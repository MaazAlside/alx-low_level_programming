#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc -  function that allocates memory for an array, using malloc.
 *@nmemb: unsigned int type
 *@size: unsigned int type
 *Return: return pointer to array
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = (char *)malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
