#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the string
 * @accept: the bytes
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return (Pointer);
}
