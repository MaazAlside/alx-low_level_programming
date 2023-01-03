#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - sum ofthe two diagonals of a square matrix of integers.
 *@a: pointer char
 *@size: size of an array
 *Return: none
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
