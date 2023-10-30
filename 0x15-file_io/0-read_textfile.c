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
	ssize_t ndo, own;
	char *buff;

	if (!filename) /*chjhvhv hvjjhvjnt*/
		return (0);

	file = open(filename, O_RDONLY); /*ohbhbjhb jvhgvhge*/

	if (file == -1)
		return (0);

	/*ghvhgv nb g,vhgch hgchghgchf jgvhters*/
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	ndo = read(file, buff, letters); /*rghvhg gvhgvghe*/
	if (ndo == -1) /*cjgvg, gjvhgfhchgfj gjhgvhgjed*/
		return (0);

	own = write(STDOUT_FILENO, buff, ndo); /*wrigvghvhg hgchcgIX*/

	free(buff);

	close(file); /*clfghgf dgtyfyg tyute*/

	return (own);
}
