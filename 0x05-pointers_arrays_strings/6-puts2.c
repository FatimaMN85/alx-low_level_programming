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
	int i, len;

	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (str[i] % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
