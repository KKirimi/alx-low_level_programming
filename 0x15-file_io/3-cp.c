#include "main.h"
#include <stdio.h>

/**
 * error_file - a program that copies the content of a file to another file
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 *
 * Return: nothing
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t k, l;
	char m[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	k = 1024;
	while (k == 1024)
	{
		k = read(file_from, m, 1024);
		if (k == -1)
			error_file(-1, 0, argv);
		l = write(file_to, m, k);
		if (l == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
