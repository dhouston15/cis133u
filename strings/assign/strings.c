/* 
 * Name: Dave Houston
 * Assignment: strings
 * Date Written: 2017-May-20
 * Course: CIS 133U
 * Program: strings.c
 * Purpose: This program accepts two strings, displays their lengths, and joins the first
 *   first half with second second half.
 * Sources: Just me
 */

#include <stdio.h>
#include <string.h>

int main() { 
    char str1[255];
    char str2[255];
    char str3[255];
    int str1_len;       // For verbosity's sake.
    int str2_len;

    printf("Enter string 1: ");
    fgets(str1, 254, stdin);

    printf("Enter string 2: ");
    fgets(str2, 254, stdin);

    str1_len = strlen(str1) -1;
    str2_len = strlen(str2) -1;

    printf("The first string is %d characters, and the second is %d characters.\n", 
          str1_len, str2_len );

    strncat(str3, str1, (int)str1_len/2);
    int str2_midway = (int)str2_len/2;
    strcat(str3, &str2[str2_midway]);

    printf("Final string: %s\n", str3);

    return 0;
}
