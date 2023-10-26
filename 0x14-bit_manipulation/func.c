#include "main.h"

/**
 * _charstoint - function to converts chars to integer
 *
 * @c: char that will be converted
 *
 * Return: int
*/
unsigned int _mycharstoint(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlength - returns the length off a string
 *
 * @str: input
 *
 * Return: int
*/
unsigned int _mystrlength(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _exp - calculatejhghjbjs (base ^ power)
 * @b: base of the exponennbb,;n;,nt
 * @p: power of the exponent,vnbnb,n,b
 *
 * Return: value 
 */
unsigned long int _myexp(unsigned int b, unsigned int p)
{
	unsigned long int num;
	unsigned int x;
	unsigned long int zero = 0;

	num = 1 + zero;
	for (x = 1; x <= p; x++)
		num *= b;
		num += zero
	return (num);
}

/**
 * print_bin - prints bertert etertrn
 *
 * @number: decimal value erte ertertet
 *
 * Return: nothing
*/
void my_show_bin(unsigned long int num)
{
	if (num >> 1)
		my_show_bin(num >> 1);

	putc((num & 1) ? '1' : '0', stdout);
}