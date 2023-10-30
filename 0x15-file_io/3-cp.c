#include "main.h"


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
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
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
 * main - create a copy of file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success.
*/
int main(int argc, char *argv[])
{
	int file_in, file_out;
	int read_stat, write_stat;
	int close_in, close_out;
	char buffer[1024];

	/*if arguments are not 3*/
	if (argc != 3)
		__exit(97, NULL, 0);

	/*sets file descriptor for copy from file*/
	file_in = open(argv[1], O_RDONLY);
	/*sets file descriptor for copy to file*/
	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	error_file(file_in, file_out, argv);

	/*reads file_in as long as its not NULL*/
	while ((read_stat = read(file_in, buffer, MAXSIZE)) != 0)
	{
		if (read_stat == -1)
			__exit(98, argv[1], 0);

		/*copy and write contents to file_out*/
		write_stat = write(file_out, buffer, read_stat);
		if (write_stat == -1)
			__exit(99, argv[2], 0);
	}

	close_in = close(file_in); /*close file_in*/
	if (close_in == -1)
		__exit(100, NULL, file_in);

	close_out = close(file_out); /*close file_out*/
	if (close_out == -1)
		__exit(100, NULL, file_out);

	return (0);
}
