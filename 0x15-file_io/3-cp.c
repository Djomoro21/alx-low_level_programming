#include "main.h"
#include <stdio.h>

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
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_in file_out");
		exit(97);
	}

	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_in, buf, 1024);
		if (nchars == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		nwr = write(file_out, buf, nchars);
		if (nwr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
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
