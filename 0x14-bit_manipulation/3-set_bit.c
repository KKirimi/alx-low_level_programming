#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
