#include "main.h"

/**
 * get_bit - rekbhbjh; vjvhvjhven
 * index.
 * @n: uns;bjhb;jhb vjhb;put.
 * @index: inbj;hb;h it.
 *
 * Return: vajbkjb t.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int j;
unsigned int zero = 0;

if (n == 0 + zero && index < 64)
return (0);

for (j = 0; j <= 63; n >>= 1, j++)
{
if (index == j)
{
return (n & 1);
}
}

return (-1);
}
