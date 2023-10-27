#include "main.h"

/**
 * set_bit - setbhjbjhbj;  1.
 * @n: po b,b,nb ;,nb;b;nt.
 * @index: ijnkjnkjnkjnkit.
 *
 * Return: 1 ifknkjnkjnkjn:kn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int myvar;

	if (index > 63)
		return (-1);

	myvar = 1 << index;
	*n = (*n | myvar);

	return (1);
}
