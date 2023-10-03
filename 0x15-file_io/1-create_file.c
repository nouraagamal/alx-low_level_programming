#include "main.h"

/**
 * create_file - creates a file and adds permission to it
 *
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 *
 * Return: 1 if successfull and -1 on err.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t openfile, bytes, len;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	openfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (openfile == -1)
		return (-1);
	for (len = 0; text_content; len++)
		;
	bytes = write(openfile, text_content, len);
	close(openfile);
	return (bytes == len ? 1 : -1);
}
