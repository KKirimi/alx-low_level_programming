#include "main.h"
#include "string.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a string
 *
 * Return: a string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
