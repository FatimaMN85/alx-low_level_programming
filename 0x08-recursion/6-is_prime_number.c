#include "main.h"

/**
 * is_prime - check if a number is a prime number.
 * @n: the number
 * @d: divisor
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime(n, d - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 * Return: number
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
