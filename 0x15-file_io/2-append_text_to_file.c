#include "main.h"

/**
 * append_text_to_file - a fvghvhgv gvhgch tjfhfend
 *                      oghhg gvhg ghge
 *
 * @filename: fhjvjhvjh jvjhgvhgvh
 * @text_content: thbjhbj hjbjhvhjv gvjgvjvkje
 *
 * Return: 1 hvhvk gkvjvjh gvjghvhjvjhure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int my_fd;
	int aps, wcount = 0;

	if (filename == NULL) /*cvjhvkjvh kgvghch jgchgvhnt*/
		return (-1);

	/*opgvgvg hgvjuhgkh gvhgvhjgvhghts*/
	my_fd = open(filename, O_APPEND | O_WRONLY);
	if (my_fd == -1) /*chebn ,b ,;n,bvjvkjvj gvhjjbent*/
		return (-1);

	if (text_content) /*appvvjhvj jvjvhgv ghcghhULL*/
	{
		while (text_content[wcount] != '\0') /*fvhv,;b,b jvgfhcjhgvjnt*/
			wcount++;

		/*apjkghkhv fytfye*/
		aps = write(my_fd, text_content, wcount);
		if (aps == -1) /*chevhvbvn, gvghvhss*/
			return (-1);
	}

	close(my_fd); /*clobvhjb jbkjhbe*/
	return (1);
}
