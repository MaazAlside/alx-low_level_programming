#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *@s: pointer char
 *@c: char varible
 *Return: return pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return ("\0");
}
