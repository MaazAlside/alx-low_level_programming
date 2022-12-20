#include <stdio.h>
#include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: the string to print
  *
  */

void puts2(char *str)
{
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	for (j = 0 ; j < i ; j = j + 2)
	{
		putchar(str[j]);
	}
	putchar('\n');
}

