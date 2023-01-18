#include <stdio.h>

/**
 * print -  the name of the file it was compiled from, followed by a new lin
 * Return: nothing
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
