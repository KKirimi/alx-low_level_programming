#include "stdio.h"

/**
 * big_number - big number function
 * @a: input
 * Description: big number function
 * Return: 0
 */

int big_number(int a)
{
	int bignum = 10;

	while (a > 0)
	{
		bignum *= 10;
		a--;
	}
	return (bignum);
}

/**
 * print_number - check main
 * @n: input
 * Description: function print_number
 * Return: 0
 */

void print_number(int n)
{
	int bigNum = big_number(8);

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	if (n == 0)
		putchar('0');
	else
	{
		while (n / bigNum == 0)
			bigNum /= 10;
		while (bigNum >= 1)
		{
			putchar((n / bigNum) + '0');
			n %= bigNum;
			bigNum /= 10;
		}
	}
}
