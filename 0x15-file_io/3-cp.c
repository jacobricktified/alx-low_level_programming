#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: return 0 on success and -1 on failure
 */

int main(int argc, char **argv)
{
	int fileDes1, fileDes2, nob1 = 1024, nob2; /* number of bytes */
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileDes1 = open(argv[1], O_RDONLY);
	if (fileDes1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileDes2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileDes2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nob1 = read(fileDes1, buf, 1024)) != 0)
	{
		if (nob1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		nob2 = write(fileDes1, buf, nob1);
		if (nob2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_new(fileDes1);
	close_new(fileDes2);
	return (0);
}


/**
 * close_new - closes a file descriptor
 * @f_n: file descriptor
 *
 * Return: no return value
 */
void close_new(int f_n)
{
	if (close(f_n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_n);
		exit(100);
	}
}
