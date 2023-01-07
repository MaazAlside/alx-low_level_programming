#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 *@argc: argument count
 *@argv: array contain argc
 *Return: return 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
