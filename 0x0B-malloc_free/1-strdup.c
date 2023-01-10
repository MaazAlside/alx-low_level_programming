#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function that returns a pointer to a newly allocated
 * pace in memory, which contains a copy of the string given as a parameter.
 *@str: array of string
 *Return: return copy of str
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *strCopy;

	len = 0;
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	strCopy = malloc(sizeof(char) * len + 1);
	while ((strCopy[i] = str[i]) != '\0')
	{
		i++;
		if (str == NULL)
		{
			return (NULL);
		}
	}
	return (strCopy);
}
