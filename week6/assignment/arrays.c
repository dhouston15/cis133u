/* 
 * Name: Dave Houston
 * Assignment: Arrays
 * Date Written: 2017-May-14
 * Course: CIS 133U
 * Program: arrays.c
 * Purpose: This program accepts input and calculates the frequency of characters that appear.
 * Sources: Just me
 */
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() { 
    char seen[UCHAR_MAX] = {0};   // Could be any character! 
    int count = 0;
    int total_chars = 0;
   
    printf("Program: Array\nAuthor: Dave Houston\n\n");

    printf("Enter string 1: ");
    
    while( count < 100 ) { 
        unsigned char c;
        c = getchar();
        if( (c == '\0') || (c == '\n') ) { 
            break;
        }

        // Don't be clever with increment operators.
        total_chars++;
        seen[c]++;
        count++;
    }

    // This could probably be done better, somehow.  
    printf("    FREQUENCY TABLE\n");
    printf("  ---------------------------\n");
    printf("  Char   Count %% of Total\n");
    printf("  ----   ----- ----------\n");
    printf("  ALL    %4d   %3.2f\n", total_chars, 100 * ((double)total_chars / (double)total_chars));
    
    for( count = 0; count <= UCHAR_MAX; count++) {
        if( seen[count] > 0 ) {
            printf("  \"%c\"    %4d   %3.2f\n", count, seen[count], 100 * ((double)seen[count] / (double)total_chars));
        }
    }
}
