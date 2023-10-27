#include "main.h"

void printLengthAndMask(unsigned long int number, int numLength, unsigned long int bitMask)
{
    printf("Length of %lu (number) is %i ", number, (numLength + 1));
    printf("and bitMask (original value 1) ");
    printf("is %lu based ", bitMask);
    printf("on [length of number - 1] == %i.\n\n", numLength);
}

void printNumberMaskAndResult(unsigned long int number, unsigned long int bitMask)
{
    printf("Value of number is %lu, ", number);
    printf("value of bitMask is %lu and ", bitMask);
    printf("value of [number & bitMask] is %lu.\n\n", (number & bitMask));
}

void printShiftedMask(unsigned long int bitMask)
{
    printf("\nValue of bitMask is %lu after right shifting by one.\n\n", bitMask);
}
int calculateLength(unsigned long int number)
{
    int length = 0;

    while (number > 0)
    {
        #ifdef DEBUG
        printf("Value of number is %lu before right shifting by one.\n\n", number);
        #endif

        length++;
        number >>= 1; /*shift number to the right by 1*/

        #ifdef DEBUG
        printf("Value of number is %lu after right shifting by one.\n\n", number);
        #endif
    }

    length--;

    return (length);
}

void print_binary(unsigned long int n)
{
    int length;
    unsigned long int mask = 1;

    length = calculateLength(n);

    if (length > 0) /*create mask based on length of number*/
        mask <<= length; /*shift mask to the left by length*/
    #ifdef DEBUG
    printDebug1(n, length, mask);
    #endif

    while (mask > 0)
    {
        #ifdef DEBUG
        printDebug2(n, mask);
        #endif

        if (n & mask) /*if number & mask == 1 print 1*/
            _putchar('1');
        else /*else if number & mask == 0 print 0*/
            _putchar('0');

        mask >>= 1; /*shift mask to the right by 1*/

        #ifdef DEBUG
        printDebug3(mask);
        #endif
    }
}
