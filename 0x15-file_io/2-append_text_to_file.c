#include "main.h"

/**
 * append_text_to_file - This function adds text at end of file
 *
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 *
 * Return: 1 if succesfull else -1 on err
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t openfile, bytes, len;

	if (!filename)
		return (-1);
	for (len = 0; text_content; len++)
		;
	openfile = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		bytes = write(openfile, text_content, len);
		if (bytes == -1)
			return (-1);
	}
	close(openfile);
	return (1);
}
