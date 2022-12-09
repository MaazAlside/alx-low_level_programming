#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the lowercase alphabet in reverse'
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
