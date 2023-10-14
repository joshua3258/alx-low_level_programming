#include "main.h"

/**
 * print_numbers - function that print number to a new line
 * Return: return void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
