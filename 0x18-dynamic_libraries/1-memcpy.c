#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: pointer var type char
 *@src: pointer var type char
 *@n: int var
 *Return: return pointer char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
