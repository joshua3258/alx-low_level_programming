#include "main.h"

/**
 * _strlen - function that return string lenght
 * @s: string character
 * Return: return 1
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
