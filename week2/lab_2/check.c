/* 
 * Name: Dave Houston
 * Assignment: Lab 2 - Check
 * Date Written: 2017-April-5
 * Course: CIS 133U
 * Program: check.c
 * Purpose: This program will display a check using printf
 * Sources: Just me
 */

#include <stdio.h>

int main() { 
    // Too clever? 
    int lines[6][8] = { 
        { 0, 0, 0, 0, 0, 0, 0, 1 },
        { 0, 0, 0, 0, 0, 0, 1, 0 },
        { 0, 0, 0, 0, 0, 1, 0, 0 },
        { 1, 0, 0, 0, 1, 0, 0, 0 },
        { 0, 1, 0, 1, 0, 0, 0, 0 },
        { 0, 0, 1, 0, 0, 0, 0, 0 }
    };

    for( int line = 0; line <= 5; line++ ) { 
        for( int c = 0; c <= 7; c++ ) { 
           char*  mark;
           if( lines[line][c] ) { 
               mark = "*";
           } else { 
               mark = " ";
           }
           printf( "%s", mark );
        }
        printf( "\n" );
    }
    

    return 0;
}

