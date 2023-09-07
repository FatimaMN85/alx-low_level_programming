#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of characters to concatenate from s2 to s1
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!str)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}

	str[i + j] = '\0';

	return (str);
}
