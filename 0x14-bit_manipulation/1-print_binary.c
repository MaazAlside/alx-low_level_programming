#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
int bit_position = sizeof(unsigned long int) * 8 - 1;
int bit, printed = 0;

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

while (bit_position >= 0)
{

bit = (n >> bit_position) & 1;


if (bit == 1 || printed)
{
putchar(bit + '0');
printed = 1;
}

bit_position--;
}

}

