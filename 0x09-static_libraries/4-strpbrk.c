#include "main.h"

/**
 * _strpbrk - function that search for a string for set of bytes
 * @s: first occurrence string
 * @accept: bytes accepted in the string
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
