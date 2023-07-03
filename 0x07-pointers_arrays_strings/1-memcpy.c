#include "main.h"

/**
 * _memcpy - this is a function that copies memory area
 * @dest: this is the memory to copy to
 * @n: bytes
 * @src: memory address
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];

	return (dest);
}
