#include <stdio.h>
#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: an int pointer
 * @n: int varible
 * Return: print revers elements of an array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
