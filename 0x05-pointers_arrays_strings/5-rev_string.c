#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string.
 *
 * @s: string
 */
void rev_string(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
