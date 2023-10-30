#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k;
	int l;
	int m;

	if (!filename)
		return (-1);

	k = open(filename, O_WRONLY | O_APPEND);

	if (k == -1)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;

		m = write(k, text_content, l);

		if (m == -1)
			return (-1);
	}

	close(k);

	return (1);
}
