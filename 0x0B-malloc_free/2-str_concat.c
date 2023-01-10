#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat -  function that concatenates two strings.
 *@s1: array of string
 *@s2: array of string
 *Return: return  concatenates s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;
	char *concat;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	len = i + j;
	concat = malloc(sizeof(char) * (len + 2));
	if (concat == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		j++;
		i++;
	}
	return (concat);




}
