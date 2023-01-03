#include <stdio.h>
#include "main.h"

/**
 * _strspn - unction that gets the length of a prefix substring.
 *@s: char pointer
 *@accept: char pointer
 *Return: return number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[0] == s[i])
		{
			i++;
			break;
		}
	}
	return (i);
}
