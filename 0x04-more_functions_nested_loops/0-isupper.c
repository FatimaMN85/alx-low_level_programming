#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 * @c: the character to check
 *
 * Return: 1 if c is upper otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
