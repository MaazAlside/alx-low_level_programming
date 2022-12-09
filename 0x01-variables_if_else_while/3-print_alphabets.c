#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, and then in uppercase'
 * Return: return 0
 */

int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
