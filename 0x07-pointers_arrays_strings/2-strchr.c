#include <string.h>

/**
 * _strchr locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\n'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}