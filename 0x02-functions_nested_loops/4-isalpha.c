#include "main.h"
#include <ctype.h>
/**
 * isalpha - this function will checks for alphabetic character
 * @c: the character to be checked
 * Return:  1 if the character lower or upper. 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
