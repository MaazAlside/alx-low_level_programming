#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 * @size: size is the size of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int space = size - 1;
	int star = size - space;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < space; j++)
		{
			printf(" ");
		}
		for (k = 0; k < star; k++)
		{
			printf("#");
		}
		space--;
		star++;
		printf("\n");
	}
	}
	else
	{
		printf("\n");
	}
}
