/* 
 * Name: Dave Houston
 * Assignment: Lab 5 - Selection and Repitition
 * Date Written: 2017-May-6
 * Course: CIS 133U
 * Program: lab5.c
 * Purpose: This program will sum the largest and smallest entries 
 *          in a list, as well as caluclate the mean of a series
 *          of non-negative numbers.
 * Sources: Just me
 */#include <stdio.h>
#include <math.h>

void part1();
void part2();

int main() { 
    part1();
    part2();
    return 0;
}

void part1() { 
    int i1, i2, i3, i4;         // I want to put it in an array, sort, and pop the first and last items off. :(
    int largest, smallest;

    printf("Enter 4 integers: ");
    scanf("%d %d %d %d%*c", &i1, &i2, &i3, &i4);
    
    largest = i1;
    smallest = i1;
    if( i2 > largest ) { largest = i2; }
    if( i2 < smallest ) { smallest = i2; }
    if( i3 > largest ) { largest = i3; }
    if( i3 < smallest ) { smallest = i3; }
    if( i4 > largest ) { largest = i4; }
    if( i4 < smallest ) { smallest = i4; }

    printf("Sum of %d and %d = %d\n", largest, smallest, largest + smallest );
}

void part2() { 
    int count = 0;
    float sum = 0;
    int input = 0;

    do { 
        printf("Enter a non-negative number: ");
        scanf("%d%*c", &input);
    
        if( input < 0 ) { break; } // Abort, abort!
        
        count++;
        sum = sum + input;
    
    } while( input >= 0 );  // Never tested, but *just* in case

    printf("Mean is %f\n", sum / count);
}
