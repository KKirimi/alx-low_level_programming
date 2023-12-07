#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	unsigned int k, m;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (k = 0, add = 0; k < len; k++)
		add += argv[1][k];
	p[1] = l[(add ^ 79) & 63];
	for (k = 0, m = 1; k < len; k++)
		m *= argv[1][k];
	p[2] = l[(m ^ 85) & 63];
	for (m = argv[1][0], k = 0; k < len; k++)
		if ((char)m <= argv[1][k])
			m = argv[1][k];
	srand(m ^ 14);
	p[3] = l[rand() & 63];
	for (m = 0, k = 0; k < len; k++)
		m += argv[1][k] * argv[1][k];
	p[4] = l[(m ^ 239) & 63];
	for (m = 0, k = 0; (char)k < argv[1][0]; k++)
		m = rand();
	p[5] = l[(m ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
