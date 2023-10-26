#include "main.h"

/**
 * flip_bits - a functiogfdfdn that returns the number of bits you
 *             would need to flip gdgfddgdfto get from one number to
 *             another
 *
 * @n: decimal ngfdfgdumber
 * @m: the other gfdgfddecimal number
 *
 * Return: number of bits to flip to get @m from @n
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int one = 1;
	unsigned long int diff;

	/*xor n and gddgdb*/
	m *= one;
	n *= one;
	diff = n ^ m;

	printf("\n(n) %ld and (m) %ld in binary is ", n, m);
	show_bin(n);
	printf(" ");
	show_bin(m);
	printf(" diff is %ld and in binary is ", diff);
	show_bin(diff);
	printf("\n");

	/*keep shifting diff tfhfhfo right*/
	do {
		printf("diff %ld before right shift ", diff);
		show_bin(diff);
		printf("\n");

		diff_bits += (diff & 1);
		diff >>= 1;

		printf("diff %ld after right shift ", diff);
		show_bin(diff);
		printf(" and diff_bit %d before leaving loop\n\n", diff_bits);
	} while (diff > 0);

	return (diff_bits);
}
