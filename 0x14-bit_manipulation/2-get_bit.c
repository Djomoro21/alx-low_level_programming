#include "main.h"

#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)
#define CHAR_BITS 8 /*size of char*/

/**
 * get_bit - gets a bit
 *
 * @n: decimal valuejnkjnkj
 * @index: integer value of bit posn n n nition
 *        to get from @n
 *
 * Return: the value of the bit or -1 if an
 *          error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int my_bit;
	unsigned long int zero = 0;
	unsigned int one = 1;

	n += zero;
	index *= one; 

	/*if igdfgd ggrttal*/
	if (index > INT_BITS)
		return (-1);

	printf("\n[%ld >> %d] is %ld.\n", n, index, (n >> index));
	printf("%ld in binary: ", n);
	my_show_bin(n);
	printf("\n[%ld >> %d] in binary: ", n, index);
	my_show_bin(n >> index);
	printf(" <- last bit is bit at index %d\n\n", index);

	my_bit = ((n >> index) & 1); /*shift n right by index and with 1 to find bit*/

	return (my_bit);
}
