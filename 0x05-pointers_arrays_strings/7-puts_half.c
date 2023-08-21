#include "main.h"
#include <string.h>

/**
 * puts_half -  prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int len, half, i, j;

	len = strlen(str);
	for (j = 0; str[j] != '\0'; j++)
	{
		half++;
	}
	half = len / 2;
	if (len % 2 == 1)
	{
		half = (len - 1) / 2;
	}
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
