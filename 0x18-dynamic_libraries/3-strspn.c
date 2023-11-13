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
	int j;
	unsigned int initial_length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				initial_length++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (initial_length);
			}
		}
	}
	return (initial_length);
}
