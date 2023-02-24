#include <stdio.h>
#include <stdlib.h>

/**
  * _isdigit - Checks if a character is a digit.
  * @c: The character to check.
  *
  * Return: 1 if c is a digit, 0 otherwise.
  */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
  * _atoi - Converts a string to an integer.
  * @s: The string to convert.
  *
  * Return: The integer value of the string.
  */

int _atoi(char *s)
{
	int sign = 1, num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		if (!_isdigit(*s))
		{
			printf("Error\n");
			exit(98);
		}

		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}

/**
  * main - Multiplies two positive numbers.
  * @argc: The number of arguments passed to the program.
  * @argv: An array of pointers to the arguments.
  *
  * Return: Always 0.
  */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
