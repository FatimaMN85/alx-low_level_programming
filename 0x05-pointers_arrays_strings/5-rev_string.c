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
	int len, i, j;

	len = strlen(s);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char k;

		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}
