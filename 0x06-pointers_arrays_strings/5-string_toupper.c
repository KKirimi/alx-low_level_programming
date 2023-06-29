#include <stdio.h>

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase
 * @p: String to be modified
 * Return: a string with uppercase letters
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
