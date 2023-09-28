#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits
 * @n: the first number
 * @m: the second number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	count = 0;

	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
