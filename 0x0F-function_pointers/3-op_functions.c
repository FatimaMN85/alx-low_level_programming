#include "3-calc.h"
#include <string.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two numbers
 * @a: first nmuber
 * @b: second number
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_dub - the difference between two numbers
 * @a: first number
 * @b: second number
 * Return: the differ
 */
int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - the product of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_div - the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_div(int a, int b)
{
	return(a / b);
}

/**
 * op_mod - the remainder of the division
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
