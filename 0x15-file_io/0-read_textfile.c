#include "main.h"

/**
 *read_textfile - reads a text file and prints it to standard output
 *@filename: file to be read
 *@letters: number of letters to be printed
 *
 *Return: return the number of bytes written to stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDes, size, nob;
	char *buf = malloc(sizeof(char) * letters);

	fileDes = open(filename, O_RDONLY);
	if ((filename == NULL) || (fileDes == -1) || (buf == NULL))
	{
		free(buf);
		return (0);
	}
	size = read(fileDes, buf, letters);
	if (size == -1)
		return (0);
	buf[size] = '\0';
	nob = write(STDOUT_FILENO, buf, size);
	if (nob == -1)
		return (0);
	close(fileDes);
	return (nob);
}
