#include <stddef.h>

/**
 * _memcpy -  copies memory area
 * @dest: pointer
 * @src: memory area
 * @n: bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (temp);
}
