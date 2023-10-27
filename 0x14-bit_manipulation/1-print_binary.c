#include "main.h"

void print_debug_statements_1(unsigned long int number, int number_length, unsigned long int number_mask)
{
	printf("Length of %lu (number) is %i ", number, (number_length + 1));
	printf("and mask (original value 1) ");
	printf("is %lu based ", number_mask);
	printf("on [length of number - 1] == %i.\n\n", number_length);
}

void print_debug_statements_2(unsigned long int number, unsigned long int number_mask)
{
	printf("Value of number is %lu, ", number);
	printf("value of mask is %lu and ", number_mask);
	printf("value of [number & mask] is %lu.\n\n", (number & number_mask));
}

void print_debug_statements_3(unsigned long int number_mask)
{
	printf("\nValue of mask is %lu after right shifting by one.\n\n", number_mask);
}

int calculate_length(unsigned long int number)
{
	int number_length = 0;

	while (number > 0)
	{
		#ifdef DEBUG
		printf("Value of number is %lu before right shifting by one.\n\n", number);
		#endif

		number_length++;
		number >>= 1; /*shift number to the right by 1*/

		#ifdef DEBUG
		printf("Value of number is %lu after right shifting by one.\n\n", number);
		#endif
	}

	number_length--;

	return (number_length);
}

void convert_to_binary(unsigned long int number)
{
	int number_length;
	unsigned long int number_mask = 1;

	number_length = calculate_length(number);

	if (number_length > 0) /*create mask based on length of number*/
		number_mask <<= number_length; /*shift mask to the left by length*/
	#ifdef DEBUG
	print_debug_statements_1(number, number_length, number_mask);
	#endif

	while (number_mask > 0)
	{
		#ifdef DEBUG
		print_debug_statements_2(number, number_mask);
		#endif

		if (number & number_mask) /*if number & number_mask == 1 print 1*/
			_putchar('1');
		else /*else if number & number_mask == 0 print 0*/
			_putchar('0');

		number_mask >>= 1; /*shift number_mask to the right by 1*/

		#ifdef DEBUG
