#include <stdio.h>
#include "main.h"

/**
  * puts_half - prints every other character of a string
  * @str: the string to print
  *
  */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	;
	}

	for (j = i - 1 / 2 ; j < i ; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
