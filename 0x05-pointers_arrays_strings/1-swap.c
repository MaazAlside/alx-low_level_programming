#include <stdio.h>
#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: an int pointer
 * @b: an int pointer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
