#include "main.h"

/**
 * _strchr - function that locate a character in a string
 * @s: string character
 * @c: occurrence character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
