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
	unsigned int lens2;
	char *new_str;
	size_t size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens2 = strlen(s2);

	if (n >= lens2)
	{
		n = lens2;
	}
	size = strlen(s1) + n + 1;
        new_str = malloc(size);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strncat(new_str, s2, n);

	return (new_str);
}
