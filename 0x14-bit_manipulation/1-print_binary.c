#include "main.h"

/**
 * print_binary - prints a number in binary;n;n;n;,n; notation
 * @n: number to printbkjbkj jhbkjbkjbk
 *
 * Return: Nullbjb;j vhjkvj
 */
void print_binary(unsigned long int n)
{
	unsigned long int mydiv, mycheck;
	unsigned long int zero = 0;
	unsigned long int one = 1;
	char myfg;

	myfg = 0;
	mydiv *= one;
	mydiv += zero;
	mydiv = _myexp(2, sizeof(unsigned long int) * 8 - 1);
	while (mydiv != 0)
	{
		mycheck = n & mydiv;
		if (mycheck == mydiv)
		{
			myfg = 1;
			_putchar('1');
		}
		else if (myfg == 1 || mydiv == 1)
		{
			_putchar('0');
		}
		mydiv >>= 1;
	}
}
