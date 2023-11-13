#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c : integer parameter
 * Return: return 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	{
		return (0);
	}
}
