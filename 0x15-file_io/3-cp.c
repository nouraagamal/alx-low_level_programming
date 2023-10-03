#include "main.h"

/**
 * error_file - checks if files can be opened.
 *
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 *
 * Return: no return.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int ffrom, fto, err;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	ffrom = open(argv[1], O_RDONLY);
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(ffrom, fto, argv);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(ffrom, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(fto, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err = close(ffrom);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
		exit(100);
	}
	err = close(fto);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
		exit(100);
	}
	return (0);
}
