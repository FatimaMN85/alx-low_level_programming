#include <string.h>
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: first string
 * @accept: second string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (*s == '\0' || *accept == '\0')
	{
		return ('\0');
	}
	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
