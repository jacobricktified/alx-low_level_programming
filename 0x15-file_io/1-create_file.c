#include "main.h"

/**
 * create_file - creates a file with a name and content provided
 * as arguments to the function.
 * @filename: file name
 * @text_content: content to be written to the file
 *
 * Return: return 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fileDes, nob;

	fileDes = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0600);
	if ((filename == NULL) || (fileDes == -1))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fileDes);
		return (1);
	}
	nob = write(fileDes, text_content, _strlen(text_content));
	if (nob == -1)
		return (-1);
	close(fileDes);
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be measured length of (char *)
 *
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int num;
	int outcome = 0;

	for (num = 0; s[num] != '\0'; num++)
	{
		outcome += 1;
	}
	return (outcome);
}


