#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: check function parameter
 * Return: 1 for success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
