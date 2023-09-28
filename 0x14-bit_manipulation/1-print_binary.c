#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i, size;

	size = sizeof(unsigned long int) * 8 - 1;
	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (size >= 0)
	{
		unsigned long int bit = (n >> size) & 1;

		if (bit)
		{
			_putchar('1');
			i = 1;
		}
		else if (i)
		{
			_putchar('0');
		}
		size--;
	}
}
