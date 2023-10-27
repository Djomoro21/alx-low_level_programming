#include "main.h"

/**
 * flip_bits - rgvghvhgvkhj kjbjkhbld
 * @n: nnlkjklj lhblke.
 * @m: njhbj hbjbjb.
 *
 * Return: nubjhbjhb bbhbjbkts.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numbits++;
	}

	return (numbits);
}
