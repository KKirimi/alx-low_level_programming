#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n:sample number one
 * @m: sample number two
 *
 * Return: the number of bits needed to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k, l = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (k = 0; k < j; k++)
	{
		if ((m & 1) != (n & 1))
			l += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (l);
}
