#include "main.h"
#include <stdio.h>
/**
 * __exit - prints error messages and exits with exit number
 *
 * @error: either the exit number or file descriptor
 * @str: name of either file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0 on success
*/
int __exit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_in file_out\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}
/**
 * error_file - checks if files can be opened.
 * @file_in: file_in.
 * @file_out: file_out.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_in, int file_out, char *argv[])
{
	if (file_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_in, file_out, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_in = open(argv[1], O_RDONLY);
	file_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_in, file_out, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_in, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_out, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_in);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}

	err_close = close(file_out);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}
	return (0);
}
