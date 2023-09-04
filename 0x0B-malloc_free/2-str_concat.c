#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t size;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	size = strlen(s1) + strlen(s2) + 1;
	new_str = malloc(size * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}
