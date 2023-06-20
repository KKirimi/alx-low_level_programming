#include "main.h"

/**
 * print_last_digit - compute the absolute value of an integer
 * @n:the last to check
 * Return: the absolute value of int
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
