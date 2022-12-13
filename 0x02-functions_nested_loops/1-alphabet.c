#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- Entry point
 *
 * Description: ' print alphabet letter in lower case'
 *
 * Return: retrun 0
 */

void print_alphabet(void) /* print alphabet */
{

	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}

