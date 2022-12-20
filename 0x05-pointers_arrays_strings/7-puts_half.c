#include <stdio.h>
#include "main.h"

/**
  * puts2 - prints every other character of a string
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

	for (j = i/2 ; j < i ; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
