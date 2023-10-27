#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int a;
char *s;

a = 1;
s = (char *) &a;

return ((int)*s);
}
