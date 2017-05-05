/* 
 * Name: Dave Houston
 * Assignment: Lab 4 - Expressions & Limits
 * Date Written: 2017-April-29
 * Course: CIS 133U
 * Program: lab4.c
 * Purpose: This program will display various limits, and calculate a sum of digits
 * Sources: Just me
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>

void part1();
void part2();

int main() { 
    part1();
    part2();
    return 0;
}

void part1() { 
    int i_var = 7;
    long int li_var  = 8;
    unsigned int ui_var = 9;
    float f_var = 32.3;
    double d_var = 82.3;
    long double ld_var = 235.5;
    char c_var = 'j';

    printf("Max sizes of data types\n");
    printf("int: %d\n", INT_MAX);
    printf("long int: %li\n", LONG_MAX);
    printf("unsigned int: %u\n", UINT_MAX);
    printf("float: %f\n", FLT_MAX);
    printf("double: %f\n", DBL_MAX);
    printf("long double: %Lf\n", LDBL_MAX);
    printf("char: %d\n", CHAR_MAX);

}

void part2() { 
    int d1, d2, d3, d4, d5;

    // the boring, readable way
    /** 
    printf("Enter a 5-digit number: ");
    scanf("%d%d%d%d%d%*c", &d1, &d2, &d3, &d4, &d5);
    printf("Sum of the digits is: %d", d1 + d2 + d3 + d4 + d5);
    **/

    // The fun, difficult to understand way
    int input_num,  sum = 0;
    printf("Enter a 5-digit number: ");
    scanf("%d%*c", &input_num);

    int leftovers = input_num;
    while(leftovers != 0) {             // .. assuming base-10..
        sum = sum + (leftovers % 10);   // calculate and add the remainder
        leftovers = leftovers / 10;     // Move to the next digit.
    }
    printf("Sum is %d\n", sum);
    
}
