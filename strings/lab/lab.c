/* 
 * Name: Dave Houston
 * Assignment: strings lab (create a palindrome)
 * Date Written: 2017-May-21
 * Course: CIS 133U
 * Program: lab.c
 * Purpose: this proram will accept a string and create a palindrome from the input. 
 * Sources: Just me
 */
#include <stdio.h>
#include <string.h>

int main() { 
    char input[128];
    char palindrome[255];
    int length;

    printf("Input a string: ");
    fgets(input, 127, stdin);

    length = strlen(input);
    strncpy(palindrome, input, length-1);   // -1 to eat the \n
    for(int i = length-1; i > 0; i--) {         // Just start at the end and go back
        strncat(palindrome, &input[i-1], 1);
    }
    printf("Your palindrome is: '%s'\n", palindrome);
}
