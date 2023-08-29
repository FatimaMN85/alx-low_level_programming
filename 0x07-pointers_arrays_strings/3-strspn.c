#include <stddef.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: first string
 * @accept: second string
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = 0;
	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		len++;
		s++;
	}

	return (len);
}
