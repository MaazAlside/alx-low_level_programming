#include <stdio.h>
#include "main.h"

/**
 *_strstr - function finds the first occurrence of the substring
 *@haystack: char pointer
 *@needle: char pointer
 *Return: return a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	for (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[indext] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == neelde[index]);
		}
		haystack++;

	}
	return ('\0');

}
