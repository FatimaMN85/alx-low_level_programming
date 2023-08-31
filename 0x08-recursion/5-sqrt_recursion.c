#include "main.h"

int root(int n, int x);
/**
 * square_root - Calculate the square root using recursion.
 * @n: the number to find the square root.
 * @x: the current guess for the square root.
 * Return: the square root of n.
 */
int root(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (root(n, x + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
