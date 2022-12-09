#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry pint
 * Description: 'print digit and determine if the number  n > 5, < 6
 * Return: return 0
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	} else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	} else if (lastDigit < 6 || lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, lastDigit);
	}
	return (0);
}
