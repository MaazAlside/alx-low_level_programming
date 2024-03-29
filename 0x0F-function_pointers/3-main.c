#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: return 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];
	if ((c == '/' || c == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
