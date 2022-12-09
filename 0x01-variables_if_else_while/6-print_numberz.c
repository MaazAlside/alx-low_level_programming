#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all single digit numbers of base 10 starting from 0'
 * Return: return 0
 */

int main(void)
{
	long int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');
	return (0);
}
