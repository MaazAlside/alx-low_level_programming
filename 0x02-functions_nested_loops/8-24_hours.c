#include <stdio.h>
#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day
 * Return: none
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				printf("0%d:", i);
			} else
			{
				printf("%d:", i);
			}
			if (j < 10)
			{
				printf("0%d\n", j);
			} else
			{
				printf("%d\n", j);
			}
		}
	}
}
