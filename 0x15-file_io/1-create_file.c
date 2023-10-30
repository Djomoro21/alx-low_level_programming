#include "main.h"

/**
 * create_file - a vjhgjh hgjfjgf kgfhjgvhghile
 *
 * @filename: najhgjhj hgjfjhf gfghjfhjfjh ghhjate
 * @text_content: stjvghvhgv vcghchg vgghvhgle
 *
 * Return: 1 hjbhkbjb hjvhjvghvvgghure
*/
int create_file(const char *filename, char *text_content)
{
	int my_fd, wrs, words;

	if (!filename) /*check if filename is present*/
		return (-1);

	/*open file by creating it and if it exists write but truncate to 0*/
	my_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (my_fd == -1) /*check if file creation was a success*/
		return (-1);

	if (text_content) /*write content to file if its not NULL*/
	{
		while (text_content[words] != '\0') /*find number of words*/
			words++;

		/*write to file*/
		wrs = write(my_fd, text_content, words);
		if (wrs == -1) /*check if write was a success*/
			return (-1);
	}else
		text_content = "";

	close(my_fd); /*close file*/
	return (1);
}
