#include "main.h"
#include <ctype.h>

/**
 * _islower - this function will check for lowercase character
 *
 * Return: will return 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
