#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>


unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
unsigned int _mycharstoint(char c);
unsigned int _mystrlength(const char *str);
unsigned long int _myexp(unsigned int b, unsigned int p);
void my_show_bin(unsigned long int num);

#endif/*MAIN H */
