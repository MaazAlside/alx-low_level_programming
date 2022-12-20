#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse followed by a new line.
 * @s: a char pointer
 * Return: none
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
