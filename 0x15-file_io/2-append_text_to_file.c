#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file descripter
 * @text_content: count
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes, nob, len = 0;

	if (filename == NULL)
		return (-1);
	fileDes = open(filename, O_WRONLY | O_APPEND);
	if (fileDes < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len])
		len++;
	nob = write(fileDes, text_content, len);
	if (nob < 0)
		return (-1);
	close(fileDes);
	return (1);
}
