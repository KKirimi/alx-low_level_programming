#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: unsigned long int
 *
 */

void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int l;

	for (k = 63; k >= 0; k--)
	{
		l = n >> k;

		if (l & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
