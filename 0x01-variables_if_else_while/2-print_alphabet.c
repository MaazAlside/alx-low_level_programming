#include <stdio.h>

/**
 * main - Entery point
 * Description: 'print Alphabets letters in lower case
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
