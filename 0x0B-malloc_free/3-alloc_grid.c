#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *@width: integer
 *@height: integr
 *Return: return returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int i;
	int j;
	int k;
	int *a;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoDarray = (int **)malloc(height * sizeof(int *));
	if (twoDarray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(twoDarray + i) = (int *)malloc(width * sizeof(int));
		if (*(twoDarray + 1) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				a = twoDarray[i];
				free(a);
			}
			free(twoDarray);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			twoDarray[k][j] = 0;
		}
	}
	return (twoDarray);
}
