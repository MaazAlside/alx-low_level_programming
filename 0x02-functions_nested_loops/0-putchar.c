#include <stdio.h>
#include "main.h"

/**
 * main - Entery point
 *
 * Return: return 0
 *
 */

int main(void)
{
	char name[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);

}
