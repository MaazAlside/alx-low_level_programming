#include "main.h"

/**
 *_memset -  function that fills memory with a constant byte.
 *@s: pointer var type char
 *@b: pointer var type char
 *@n: int var
 *Return: return pointer char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}
	return (s);

}
