#include "main.h"

/**
 * char_to_int - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
*/
unsigned int char_to_int(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * get_string_length - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int get_string_length(const char *str)
{
	unsigned int count = 0;

	while (str[count] != '\0')
		count++;
	return (count);
}

/**
 * binary_string_to_uint - a function that converts a binary number
 *                  to an unsigned int
 *
 * @b: string that contains 0 and 1 characters
 *
 * Return: the number converted or 0
 *         if @b contains a character
 *         that is not 0 or 1 or when
 *         @b is null
*/
unsigned int binary_to_uint(const char *b)
{
	int position;
	unsigned int final_result = 0, base2 = 1,  digit = 0;

	/*if b is NULL return 0*/
	if (b == NULL)
		return (0);

	#ifdef DEBUG /*print debug statement*/
	printf("String is %s, and length is %u.\n", b, get_string_length(b));
	#endif

	/*iterate through string*/
	for (position = get_string_length(b) - 1; position >= 0; position--)
	{
		digit = char_to_int(b[position]); /*convert char to number*/

		#ifdef DEBUG /*print debug statements*/
		printf("Number is %u, position is %i and base is %u.\n\n", digit, position, base2);
		#endif

		/*if number is not 0 or 1 return 0*/
		if (digit != 0 && digit != 1)
			return (0);

		final_result += digit * base2; /*enable debug to see it in action*/
		base2 *= 2;

		#ifdef DEBUG /*print debug statements*/
		printf("Result is %u.\n", final_result);
		#endif
	}

	return (final_result);

}
