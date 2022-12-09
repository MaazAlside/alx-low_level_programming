#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, followed by a new line'
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e')
		{
			if (c != 'q')
			{
				putchar(c);
			}
		}
	}
	putchar('\n');
	return (0);
}
