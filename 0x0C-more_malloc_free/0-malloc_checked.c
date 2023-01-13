#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked -  function that allocates memory using malloc.
 *@b:unsigned interher
 *Return: return NULL or pointer
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		return (98);
	return (c);

}
