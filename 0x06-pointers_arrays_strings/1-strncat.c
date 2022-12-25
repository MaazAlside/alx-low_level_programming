#include <stdio.h>
#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: charpoiinter
 * @src: char pointer
 * @n : int varible
 * Reaturn: return pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n ; j++)
	{
		dest[i] = src[j];
	}
	return dest;
}
