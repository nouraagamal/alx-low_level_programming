#include "main.h"

/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 *
 * @filename: The name of the file
 * @letters: The number of characters it should print
 *
 * Return: Returns the number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openfile, bytes = 0;
	char *buffer;

	if (!filename)
		return (0);
	openfile = open(filename, O_RDONLY);
	if (openfile == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	bytes = read(openfile, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(openfile);
	return (bytes);
}
