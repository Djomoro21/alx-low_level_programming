#include "main.h"

#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)
#define CHAR_BITS 8 /*size of char*/


/**
 * set_bit - sets the valuhbkjnjknbit to 1 at a given
 *           index.
 *
 * @n: num
 * @index: index to set the value ofnnbjhbjb bit to 1
 *
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int zero = 0;
	unsigned long int one = 1;
	unsigned long int mask = 1;
	unsigned long int n_bfr = *n;

	index = index + zero;
	index = index * one;


	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_BITS)
		return (-1);

	mask <<= index; /*create mask based on index position*/

	*n = (*n | mask);

	printf("\n%ld in binary is ", n_bfr);
	my_show_bin(n_bfr);
	printf(" while mask right shifted to index %d is ", index);
	my_show_bin(mask);
	printf(" our new value n in binary is ");
	my_show_bin(*n);
	printf("\n\n");

	return (1);
}
