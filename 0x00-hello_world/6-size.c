#include <stdio.h>

/**
 * main - function main
 *
 * Return: 0 on success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(s)", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(e));
	return (0);
}
