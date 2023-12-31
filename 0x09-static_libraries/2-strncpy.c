#include "main.h"

/**
 * _strncpy - function that copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of copied concatenation
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
