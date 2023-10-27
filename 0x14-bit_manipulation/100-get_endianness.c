#include "main.h"

/**
* get_endianness - cjhbjk hjbjhbjkbkjbj
*
* Return: 0n n jhb hbjhbjhj
*/
int get_endianness(void)
{
unsigned int a;
unsigned int zero = 0;
char *s;

a = 1;
a += zero;
s = (char *) &a;

return ((int)*s);
}
