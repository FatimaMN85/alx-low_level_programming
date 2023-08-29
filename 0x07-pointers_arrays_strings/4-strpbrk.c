#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string
 * @accept: second string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		char *ptr = accept;
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return s;
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
