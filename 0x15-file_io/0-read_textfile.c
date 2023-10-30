#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to
 * the standard output
 * @filename: name of the file
 * @letters: numbers of letters printed
 *
 * Return: the actual number of letters it should read and print
 * if it fails, returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	ssize_t l, m;
	char *buf;

	if (!filename)
		return (0);

	k = open(filename, O_RDONLY);

	if (k == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	l = read(k, buf, letters);
	m = write(STDOUT_FILENO, buf, l);

	close(k);

	free(buf);

	return (m);
}
