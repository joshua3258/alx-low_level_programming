#include "main.h"

/**
 * _puts - function that print string with new line
 * @str: string character
 * Return: return 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
