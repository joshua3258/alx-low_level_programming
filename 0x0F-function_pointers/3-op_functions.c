#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: the subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first number
 * @b: second number
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 * Return: retrun division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of two number
 * @a: first number
 * @b: second number
 * Return: return the reminder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
