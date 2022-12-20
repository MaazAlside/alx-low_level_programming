#include <stdio.h>
#include "main.h"

/**
 * rev_string -  function that reverses a string.
 * @s: char pointer
 */

void rev_string(char *s)
{
	int i;
	int j;
	int len;
	int temp;

	while (s[i] != 0)
	{
		i++;
	}

	len = i;
	i = 0;
	j = len - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}

}
