#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: address
 * @b: a value
 * @n: bytes number
 * Return: a changed array with a new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
