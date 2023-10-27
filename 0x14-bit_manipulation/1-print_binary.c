#include "main.h"

/**
 * is_greater_than_zero - checks if a number is greater than zero.
 * @n: unsigned long int.
 *
 * Return: 1 if n is greater than zero, 0 otherwise.
 */
int is_greater_than_zero(unsigned long int n)
{
    return (n >> 1);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
    if (is_greater_than_zero(n))
    {
        print_binary(n >> 1);
        _putchar((n & 1) + '0');
    }
    else
    {
        _putchar('0');
    }
}
