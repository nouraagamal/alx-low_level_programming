#include "main.h"

/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 *
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 *
 * Return: Returns the number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, byte;
	char *buffer;

	buffer = malloc(sizeof(char) * (letters));
	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);
	byte = read(fd, buffer, letters);
	byte = write(STDOUT_FILENO, buffer, byte);
	close(fd);
	return (byte);
}
