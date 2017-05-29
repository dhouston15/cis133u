/* 
 * Name: Dave Houston
 * Assignment: Lab 8 Functions
 * Date Written: 2017-May-27
 * Course: CIS 133U
 * Program: lab.c
 * Purpose: This program will calculate a factorial w/o recursing.
 * Sources: Just me
 */

#include <stdio.h>

/* Function prototypes */
unsigned long long fact( int input );

int main() {

    int startingInt;

    printf("Give me an integer: ");
    scanf("%d%*c", &startingInt);
    printf(".. please wait..\n");
    
    // We pick ULL 'cause this number can get YUGE
    unsigned long long result = fact(startingInt);

    printf("%d! is %llu\n", startingInt, result);

    return 0;
}

unsigned long long fact( int input  ) { 
    unsigned long long result = 1;
    int i = input;
    while( i > 1 ) { // Iterate from i to 1
        result = result * (unsigned long long)i;
        i--;
    }
    return result;
}
