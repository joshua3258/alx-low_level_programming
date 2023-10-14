#include "main.h"

/**
 * print_diagonal - function that print a diagonal line
 * @n: number of times the '\' should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i ; j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');

	}
}
