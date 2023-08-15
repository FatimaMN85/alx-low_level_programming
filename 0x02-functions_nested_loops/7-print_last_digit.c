#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 *
 * @n: the number to check
 * Return: will return last digit
 */
int print_last_digit(int n)
{
	int lastdgt;

	lastdgt = n % 10;
	if (lastdgt < 0)
	{
		lastdgt = lastdgt * -1;
	}
	_putchar(lastdgt + '0');
	return (lastdgt);
}
