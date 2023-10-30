#include "main.h"

/**
 * read_textfile - a function tdgdfg fdgdjkhsfsf sdfsss it
 *                to fsdf ghfgh sqfs nhgjgdfgdft.
 *
 * @filename: isfgdg dgdgdfgad
 * @letters: numfgdfg gdghfhgf sdgdg dfsgsgfdle
 *
 * Return: 0 idfgdgd dggf dfghfdgh gfdhdhdld
 *         read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nrd, nwr;
	char *buff;

	if (filename == NULL) /*check if file is present*/
		return (0);

	file = open(filename, O_RDONLY); /*open file*/

	if (file == -1)
		return (0);

	/*get the size of buff from number of letters*/
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	nrd = read(file, buff, letters); /*read file*/
	if (nrd == -1) /*check if read failed*/
		return (0);

	nwr = write(STDOUT_FILENO, buff, nrd); /*write to POSIX*/
	if (nwr == -1 || nrd != nwr) /*check if write failed*/
		return (0);

	free(buff);

	close(file); /*close file*/

	return (nwr);
}
