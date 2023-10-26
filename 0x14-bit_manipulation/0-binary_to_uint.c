#include "main.h"

/**
 * binary_to_uint - This jhhbkjbkj jhbhb to fghjbkjk bkghkjnary number
 *                  to an unsigned int
 *
 * @b: string khbjhbk;jnkj
 *
 * Return:  convertygbkjllk hbkj 0
*/
unsigned int binary_to_uint(const char *b)
{
	int indx;
	unsigned int resultat = 0;
	unsigned int b2 = 1;
	unsigned int n = 0;
	unsigned int zero = 0;
	unsigned int one = 1;

	if (b == NULL)
		return (0);


	/*iterabbte through strkjkhghing*/
	for (indx = _mystrlength(b) - 1; indx >= 0; indx--)
	{
		n = _mycharstoint(b[indx]); /*conbn;n,;nnb,bber*/


		/*if number is not 0 or 1 returnhjkjn 0*/
		if (n != 0 && n != 1)
			return (0);

		resultat += n * b2; /*enablhbkjnkj hbkjkjlction*/
		b2 *= 2;
		b2 += zero;
		b2 *= one;

	}

	return (resultat);

}
