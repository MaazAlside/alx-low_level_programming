#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 *@argc: argoument count
 *@argv: array of string
 *Return: return number of arguments passed into it.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
