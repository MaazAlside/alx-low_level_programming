#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n : integer prameter
 * Return: none
 */

void print_line(int n)
{
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (space = n; space > 0; space--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
