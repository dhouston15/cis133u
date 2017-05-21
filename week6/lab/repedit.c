/* repdigit.c
 *
 * Solution to Programming Project 1 (Chapter 8)
 *
 * From C PROGRAMMING: A MODERN APPROACH (Second Edition)
 *
 * Copyright (c) 2008 W. W. Norton & Company
 * All rights reserved.
 *
 * This program may be freely distributed for class use,
 * provided that this copyright notice is retained.
 */

#include <stdio.h>
#define true 1
#define false 0
int main(void)
{
    // Declare some variabls to hold our data:
    //  digit_count[] -- each index is a digit we are tracking in a base-10 number
    //  repeated_digits -- An overall boolean to indicate if we should bother
    //                     iterating over the array at all.
    //  digit, n -- placeholders for looping and input.
  int digit_count[10] = {0};                    
  int repeated_digits = false;
  int digit;
  long n;

  printf("Enter a number (for example 89065590): ");    // Collect a number
  scanf("%ld", &n);

  while (n > 0) {                   // Begin looping while there are digits left.
    digit = n % 10;                 // Between this and line 37, treat the input like a stack; pop the last digit off.
    if (digit_count[digit] > 0)     
      repeated_digits = true;       // Set the boolean flag, so we can loop later.
    digit_count[digit]++;           // keep track of # of times we've seen digit
    n /= 10;
  }

  if (repeated_digits) {                    // Check the boolean to save ourselves from uncessary looping
    printf("Repeated digit(s):");
    for (digit = 0; digit < 10; digit++)    // Loop over our digit_count
      if (digit_count[digit] > 1)           // If we've got 2 or more, it's a repeat!
        printf(" %d", digit);               // Say so
    printf("\n");
  } else
    printf("No repeated digit\n");          // .. or we got nothing.

  return 0;
}
