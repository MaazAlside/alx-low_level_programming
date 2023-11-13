#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: a char pointer
 * Return: none
 */

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != 0; ++len)
	{
		printf("%c", str[len]);
	}
	printf("\n");
}
