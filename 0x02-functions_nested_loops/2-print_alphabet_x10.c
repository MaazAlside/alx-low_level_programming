#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function print alphabet 10 in lower case 10 time
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		putchar('\n');
	}
}
