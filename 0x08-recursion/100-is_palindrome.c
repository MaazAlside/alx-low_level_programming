#include <stdio.h>

/**
  * is_palindrome - function that returns 1 if a string is a
  * palindrome and 0 if not
  * @s: string
  * Return: return 0 or 1
  */

int is_palindrome(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}

	return (1);
}

