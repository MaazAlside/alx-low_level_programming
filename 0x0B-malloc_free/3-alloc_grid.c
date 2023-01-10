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

	if (width <= 0 || height <= 0)
		return (NULL);
	twoDarray = (int **)malloc(sizeof(int *) * height);
	if (twoDarray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoDarray[i] = (int *)malloc(sizeof(int) * width);
		if (twoDarray[i] == NULL)
		{
			free(twoDarray);
			for (j = 0; j <= i; j++)
			{
				free(twoDarray[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twoDarray[i][j] = 0;
		}
	}
	return (twoDarray);
}
