#include "main.h"

/**
* get_endianness - cjhbjk hjbjhbjkbkjbj
*
* Return: 0n n jhb hbjhbjhj
*/
int get_endianness(void)
{
unsigned int a;
char *s;

a = 1;
s = (char *) &a;

return ((int)*s);
}
