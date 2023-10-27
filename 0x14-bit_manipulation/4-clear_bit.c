#include "main.h"

/**
 * clear_bit - sevhgvgvgh gvgvhgvh0.
 * @n: poinbjhbjh hbjhbjint.
 * @index: ijbhjhbjh hbjhbjjb.
 *
 * Return: hbhjbj jhbjhbjkbj hbbhj't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int myvar;

	if (index > 63)
		return (-1);

	myvar = 1 << index;

	if (*n & myvar)
		*n ^= myvar;

	return (1);
}
