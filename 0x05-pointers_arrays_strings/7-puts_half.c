#include "main.h"
#include <string.h>

/**
 * puts_half -  prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int len, half, star, i;

	len = strlen(str);
	half = len / 2;
	star = half;
	for (i = star; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
