#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_ptr);
}
