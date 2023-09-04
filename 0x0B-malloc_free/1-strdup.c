#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return a ptr to a newly allocated space in memory
 * @str: the string
 * Return: pointer
 */
char *_strdup(char *str)
{
	size_t size;
	char *nstr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str) + 1;
	nstr = malloc(size);

	if (nstr == NULL)
	{
		return (NULL);
	}
	memcpy(nstr, str, size);
	return (nstr);
}
