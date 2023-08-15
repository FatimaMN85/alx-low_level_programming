#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * print_sign - this function will prints the sign of a number.
 * @n: the number to be checked
 * Return: 1 if n is greater than zero. 0 if n is zero otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
