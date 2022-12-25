#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: char pointer
 * Return: return string
 */

char *string_toupper(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);


}
