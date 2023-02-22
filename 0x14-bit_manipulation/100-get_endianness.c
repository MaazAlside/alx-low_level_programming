#include "main.h"
/**
  * ins - this function checks foe endianness
  * Return: 0 if big endian and 1 if little endian
  */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	return (*c == 1) ? 1 : 0;
}
