#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc -  function that allocates memory for an array, using malloc.
 *@nmemb: integer
 *@size: integer
 *Return: return NULL or
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(sizeof(char) * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
