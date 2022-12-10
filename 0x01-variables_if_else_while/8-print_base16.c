#include <stdio.h>

/**
 * main - Entery Point
 * Description: 'prints all the numbers of base 16 in lowercase'
 * Return: return 0
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (a = 'a'; a < 'g'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
