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
	int my_fd, wrs, wcount = 0;

	if (!filename) /*chvbjhbvjh, vgjvhgvh ghchfcfgcgnt*/
		return (-1);

	/*opjhhjvbjhb vgvghgvhg ghchchgchgc gcghvhvhvh 0*/
	my_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (my_fd == -1) /*chjvhgvj ghcchgch vkkjvgjvjhj hjhjkess*/
		return (-1);

	if (text_content) /*wrghcghch gvhchgh gjgjhkjvv fugvjhjhjLL*/
	{
		while (text_content[wcount] != '\0') /*fighjvhj vghhvhg gvhgcghs*/
			wcount++;

		/*write to file*/
		wrs = write(my_fd, text_content, wcount);
		if (wrs == -1) /*chjhvbv gvghvhg gvvhgv jkgghhgess*/
			return (-1);
	}
	close(my_fd); /*cbgjhbhj hvghfvghle*/
	return (1);
}
