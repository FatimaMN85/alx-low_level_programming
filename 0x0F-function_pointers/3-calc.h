#ifndef _CALC_H
#define _CALC_H

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - return the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_add(int a, int b);
/**
 * op_sub - return the sub of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_sub(int a, int b);
/**
 * op_mul - returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_mul(int a, int b);
/**
 * op_div - return the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_div(int a, int b);
/**
 * op_mod - return the reminder of two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_mod(int a, int b);


int (*get_op_func(char *s))(int, int);

#endif
