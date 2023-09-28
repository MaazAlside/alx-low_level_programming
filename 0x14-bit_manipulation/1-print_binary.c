#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
int binaryNumber[32];
int i = 0;
int j;

if (n == 0)
{
printf("0");
return;
}

if (n == 1)
{
printf("1");
return;
}

while (n > 0)
{
binaryNumber[i] = n % 2;
n = n >> 1;
i++;
}

for (j = i - 1; j >= 0; j--)
{
printf("%d", binaryNumber[j]);
}

}

