#include "main.h"
#include <stdlib.h>

/**
 * _abs - This function will computes the absolute value of an integer.
 *
 * Return: it will return negative, positive or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
