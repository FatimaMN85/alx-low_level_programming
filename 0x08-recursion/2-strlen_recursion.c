#include "main.h"

/**
 * _strlen_recursion - the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
