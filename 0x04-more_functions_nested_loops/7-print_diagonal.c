#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - fuction draws a diagonal line on the terminal.
 * @n : integer parameter
 * Return: none
 */

void print_diagonal(int n)
{
	int space;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (space = 0; space < n; space++)
		{
			for (j = 0; j < space; j++)
			{
				_putchar(' ');
			}
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
