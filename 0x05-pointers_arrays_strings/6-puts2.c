#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 -  prints every other character of a string
 *
 * @str: the string
 */
void puts2(char *str)
{
	int i, length;
	char *p = str;

	length = 0;
	while (*p != '\0')
	{
		length++;
		p++;
	}
	for (i = 0; i <= length - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
