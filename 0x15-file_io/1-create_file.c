#include "main.h"

/**
 * create_file - creates a file
 * @filename: nameof the file
 * @text_content: content written in the file
 *
 * Return: 1 for success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int k;
	int l;
	int m;

	if (!filename)
		return (-1);

	k = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (k == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (l = 0; text_content[l]; l++)
		;

	m = write(k, text_content, l);

	if (m == -1)
		return (-1);

	close(k);

	return (1);
}
