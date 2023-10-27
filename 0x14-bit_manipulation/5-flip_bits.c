#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to flip to 
 * get from one number to another
 * @n:sample number one
 * @m: sample number two
 *
 * Return: the number of bits needed to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k;

	for (k = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			k;
	}

	return (k);
}
