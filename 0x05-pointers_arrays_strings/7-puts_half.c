#include "main.h"
#include <string.h>

/**
 * puts_half -  prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int len, half, i;

	len = strlen(str);
	half = len / 2;
	if (len % 2 == 1)
	{
		half = (len - 1) /2;
	}
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
