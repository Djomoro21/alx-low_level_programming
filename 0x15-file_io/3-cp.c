#include "main.h"

/**
 * my_exit - checks if files can be opened.
 * @file_in: file_in.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void my_exit(int file_in, int file_to, char *argv[])
{
	if (file_in == -1)
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
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_in, file_to, clos;
	ssize_t num, stats;
	char my_buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_in file_to");
		exit(97);
	}

	file_in = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	my_exit(file_in, file_to, argv);

	num = 1024;
	while (num == 1024)
	{
		num = read(file_in, my_buff, 1024);
		if (num == -1)
			my_exit(-1, 0, argv);
		stats = write(file_to, my_buff, num);
		if (stats == -1)
			my_exit(0, -1, argv);
	}

	clos = close(file_in);
	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}

	clos = close(file_to);
	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}
	return (0);
}
