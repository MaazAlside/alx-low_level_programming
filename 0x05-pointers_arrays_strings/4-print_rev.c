#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse followed by a new line.
 * @s: a char pointer
 * Return: none
 */

void print_rev(char *s)
{
	int len;
	int i;

	for (len = 0; s[len] != 0; len++)
	{
	}
	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
